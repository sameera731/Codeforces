#include<bits/stdc++.h>
using namespace std;
int main (){

    int n;

    
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(abs(a));
        }

        sort(v.begin(), v.end());

        cout<<v[0]<<"\n";


    return 0;
}