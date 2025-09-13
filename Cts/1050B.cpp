#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,x,y,a,count;
    cin>>t;
    while(t--){
        count=0;
        cin>>n>>m>>x>>y;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a<=y) count++;
        }
        for(int i=0; i<m; i++){
            cin>>a;
            if(a<=x) count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}