#include<bits/stdc++.h>
using namespace std;
int main (){
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;

        if(a>b) cout<<"First"<<"\n";
        else if(a<b) cout<<"Second"<<"\n";
        else if(a==b){
            if(c%2!=0) cout<<"First"<<"\n";
            else cout<<"Second"<<"\n";
        }
    }
}