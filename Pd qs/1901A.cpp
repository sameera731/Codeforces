#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t>0){
        vector<int>v;
        v.push_back(0);
        cin>>n>>x;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        v.push_back(x);

        //start dist , arr is made now
        int d=INT_MIN;
        for(int i=0;i<=v.size()-2;i++){
            if(i==v.size()-2) d=max(d, 2*(v[i+1]-v[i]));
            else{
                d=max(d, v[i+1]-v[i]);
            }
        }
            cout<<d<<"\n";
        t--;
    }

    return 0;
}