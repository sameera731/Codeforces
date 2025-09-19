#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        long long store=0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
            store=store^a;
        }
        if(n%2==0){
            if(store==0) cout<<2<<"\n";
            else cout<<-1<<"\n";
        }
        else{
            cout<<store<<"\n";
        }
    }
    return 0;
}