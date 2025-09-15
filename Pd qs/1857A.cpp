#include<bits/stdc++.h>
using namespace std;
int main(){
    //if no of odd nums if is odd then NO else always YES
    int t, n, a, count;
    cin>>t;
    while(t--){
        cin>>n;
        count=0;
        
        for(int i=0; i<n; i++){
            cin>>a;
    
            if(a%2!=0) count++;
        
        }
        if(count%2!=0) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";


    }
    return 0;
}