#include<bits/stdc++.h>
using namespace std;
//very good question for logic and understanding. Super complex question, super easy answer
int main(){
    int t,n,sum;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(int i=0; i<n-1; i++){
            int a;
            cin>>a;
            sum+=a;
        }
        cout<<0-sum<<"\n";
    }
    return 0;
}