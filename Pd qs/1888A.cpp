#include<bits/stdc++.h>
using namespace std;

// instead of fn approach you can also do by multiple loops in main

bool check(string x, string s){
    if(x.size() < s.size()){
        return false;
    }
    for(int i = 0; i <= x.size() - s.size(); i++){ // sliding the window of size s for iterations
        if(x.substr(i, s.size()) == s){
            return true;
        }                            // most imp part!!!
    }
    return false;
}

int main(){
    int t, n, m;
    string x, s;
    cin >> t;
    while(t--){ 
        cin >> n >> m;
        cin >> x >> s;

        
        string x1 = x + x;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;

        int ans = -1; 

        if(check(x, s)) ans = 0;
        else if(check(x1, s)) ans = 1;
        else if(check(x2, s)) ans = 2;
        else if(check(x3, s)) ans = 3;
        else if(check(x4, s)) ans = 4;
        else if(check(x5, s)) ans = 5;
    

        cout << ans << "\n";
    }

    return 0;
}
