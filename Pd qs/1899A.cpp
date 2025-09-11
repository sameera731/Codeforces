#include<iostream>
using namespace std;
int main(){
    int t,n,v1,v2,moves,win;
    cin>>t;
    while(t>0){
        win=0;
        cin>>n;
        moves=0;
        v1=1;
        v2=0;
        while(moves<10){
        
            if((n-1)%3==0) n--;
            else n++;

            if(v1==1 && v2==0) {
                v1=0;
                v2=1;
            }
            else{
                v2=0;
                v1=1;
            }
            moves++;

            if(n%3==0 && v1==0 && moves<=10){
                win=1;
                break;
            
            }
            
        }
        if(win==1) cout<<"First"<<"\n";
        else cout<<"Second"<<"\n";


        t--;
    }

    return 0;
}