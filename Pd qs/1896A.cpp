#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t>0){
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int a; 
            cin>>a;
            v.push_back(a);
        }
 
     if(v[0]==1) cout<<"YES"<<"\n";
     else cout<<"NO"<<"\n";
        t--;
    }
    return 0;
}