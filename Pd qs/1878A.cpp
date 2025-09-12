#include<bits/stdc++.h>
using namespace std;
int main (){

    int t,n,k;
    cin>>t;
    while(t--){
    bool flag=false;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            
        }
        for(int i=0; i<n; i++){
            if(v[i]==k) {
                flag=true;
                break;
            }
        }
        if(flag==true) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }

    return 0;
}