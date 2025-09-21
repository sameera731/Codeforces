#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v;
        int count=0;
        int check=0;
        int ans=0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
            if(a==2) count++;
        }
        if(count%2!=0) cout<<-1<<"\n";
        else if(count==0) cout<<1<<"\n";
        else{
            for(int i=0; i<n; i++){
                
                if(v[i]==2) check++;
                if(check==(count/2)) {
                    ans=i;
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}