#include<bits/stdc++.h>
using namespace std;
int main (){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int a; 
            cin>>a;
            v.push_back(a);
        }
        vector<int> res;
        res.push_back(v[0]);
        for(int i=1; i<n; i++){
        

            if(v[i]<v[i-1]){
                res.push_back(v[i]);
                res.push_back(v[i]);

            }
            else res.push_back(v[i]);
        }
        cout<<res.size()<<"\n";
        for(int i=0; i<res.size(); i++){
            cout<<res[i]<<"\n";
        }

    }

    return 0;
}