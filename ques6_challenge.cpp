#include<iostream>
#include<stdio.h>
#include<math.h>
#define MOD 1000000007
#define pi 3.14
#define ll long long
using namespace std;
int main(){
    ll p,q,r;
    cin>>p>>q>>r;
    while(r--){
        ll e,x,y,z;
        cin>>e;
        if(e==1){
            cin>>x>>y;
            cout<<0<<"\n";
        }
        else{
            cin>>x>>y>>z;
            cout<<"SEND"<<" "<<x<<" "<<y<<" "<<"1"<<" "<<z<<"\n";
        }
        ll po;
        cin>>po;
        if(po==-1)
            return 0;
    }

}
