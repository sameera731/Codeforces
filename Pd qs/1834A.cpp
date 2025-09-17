#include<bits/stdc++.h>
using namespace std;
int main(){
    //need to maintain/finally have even no of -1s and no of 1s>=no of -1s
    int t,n;
    cin>>t;
    while( t--){
        cin>>n;
        vector <int> v;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);

        }
        int positive_count=0;
        int negative_count=0;
        for(int i=0; i<n; i++){
            if(v[i]==1) positive_count++;
            else negative_count++;
        }
        int ops=0; 
        while(positive_count<negative_count || negative_count%2==1){
            ops++;
            positive_count++;
            negative_count--;
        }
        cout<<ops<<endl;

    }
    return 0;
}