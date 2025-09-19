#include<bits/stdc++.h>
using namespace std;
int main (){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(d<b) cout<<-1<<"\n";
        else if(c>a && d==b) cout<<-1<<"\n";
        else{
            int steps=0;
            steps+=abs(d-b);
            b=b+steps;
            a+=steps;
            if(c>a && d==b) cout<<-1<<"\n";
            else {steps+=abs(c-a);
            cout<<steps<<"\n";}
        }

    }
    return 0;
}