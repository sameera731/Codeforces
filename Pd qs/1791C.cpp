#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;

        cin>>s;
        int i=0;
        int ans=n;

        while(i<(n/2)){
            if(i==n-1-i) break;
            else if(s[i]==s[n-1-i]) break;
            else if((s[i]=='1' && s[n-1-i]=='0') || (s[i]=='0' && s[n-1-i]=='1')) ans-=2;
            i++;

        }
        cout<<ans<<"\n";
    }
    return 0;
}