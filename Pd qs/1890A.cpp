
#include<bits/stdc++.h>
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
        //use freq map
        map<int, int>freq_map;
        for(int i=0; i<n; i++){
            freq_map[v[i]]++;
        }
        if(freq_map.size()>2) cout<<"NO"<<"\n";
        else{
            //use iterators to access els of map
            int f1=freq_map.begin()->second;
            int f2=freq_map.rbegin()->second;

            if(f1==f2) cout<<"YES"<<"\n";
            else if(n%2!=0 && abs(f1-f2)==1) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }

        t--;
    }
    return 0;
}