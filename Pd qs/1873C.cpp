#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    vector<vector<int>> v(10, vector<int>(10));
    v={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}

    };

    cin>>t;
    while(t--){
        char a [10][10];
        for(int i=0; i<10; i++){
            string s;
            cin>>s;
            for(int j=0; j<10; j++){
                a[i][j]=s[j];
            }
        }

        int score=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(a[i][j]=='X') score+=v[i][j];

            }
        }

        cout<<score<<"\n";

    }
    return 0;
}