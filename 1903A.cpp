#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t>0){
        vector<int>v;
        cin>>n>>k;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        vector<int>v_copy=v;
        sort(v_copy.begin(),v_copy.end());
        if(v_copy==v || k>1) {
            cout<<"YES"<<"\n";
        
        }

        else {
            cout<<"NO"<<"\n";
        
        }
        
        t--;
    }

    return 0;
}