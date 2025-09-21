#include<bits/stdc++.h>
using namespace std;
int main(){
    //good q logic wise. Aptitude
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int check=0;
        vector<int>v;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());
        int maxel=v[n-1];
        int minel=v[0];
        if(maxel==minel) cout<<"NO"<<"\n";
        else{
            cout<<"YES"<<"\n";
            cout<<maxel<<" "<<minel<<" ";
            for(int i=1; i<n-1; i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}