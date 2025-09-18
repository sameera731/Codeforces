#include<bits/stdc++.h>
using namespace std;
int main (){
    int t, n, count;
    cin>>t;
    while(t--){
        cin>>n;
        count=0;
        int len=0;
        vector<int>v;
        for(int i=0 ; i< n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0; i<n; i++){
            if(v[i]==0) {
                count++;
                len=max(count, len);

            }
            else count=0;
        }
        cout<<len<<"\n";


    }
    return 0;
}