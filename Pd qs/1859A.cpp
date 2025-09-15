#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a;
        for(int i=0; i<n; i++){
            cin>>x;
            a.push_back(x);
        }

        int maxEl=*max_element(a.begin(), a.end());

        vector<int> b,c;
        for(int i=0; i<n; i++){
            if(a[i]==maxEl) c.push_back(a[i]);
            else b.push_back(a[i]);
            
        }

        if(b.size()==0) cout<<-1<<"\n";
        else{
            cout<<b.size()<<" "<<c.size()<<"\n";

            for(auto it:b){
                cout<<it<<" ";
            }
            cout<<"\n";
            for(auto it:c){
                cout<<it<<" ";
            }
            cout<<"\n";
        }


    }
    return 0;
}