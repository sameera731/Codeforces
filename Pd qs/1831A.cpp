#include<bits/stdc++.h>
using namespace std;
int main(){
    //we have to make ai+bi<=a(i+1)+b(i+1)<=...
    //so we will make ai+bi=a(i+1)+b(i+1)=...=k
    //for that we will add the number n+1-a[i] to each a[i] which gives n+1=k for all
    //and yes n+1-a[i] will also always be a part of permutaion cause a[i] if unique and all a[i] are ranging 
    //from 1<=a[i]<=n so then n+1-a[i] will also be unique and range in the same so indirectly its a pnc only
    
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }

        for(int i=0; i<n; i++){
            cout<<n+1-a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}