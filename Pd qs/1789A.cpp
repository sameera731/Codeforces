#include<bits/stdc++.h>

using namespace std;

//vvv good question in arithmetic logic!
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector <int> v;
        for(int i=0; i<n; i++){
            int a;
             cin>>a;
             v.push_back(a);
        }

        int found=0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(v[i], v[j]) <=2) {
                    found=1;
                    break;
                }
            }
            if(found==1) break;
        }
        if(found==1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}