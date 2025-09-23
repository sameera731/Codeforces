#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);

        }
        int oprs=0;
        for(int i=0; i<n-1; i++){
            if((v[i]%2)==v[i+1]%2 ) oprs++;
        }
        cout<<oprs<<"\n";
    }

    return 0;
}