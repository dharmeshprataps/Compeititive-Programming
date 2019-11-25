#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,r;
    cin>>n>>m>>r;
    int m1=0;
    int b1=0;
    for(int i=0;i<n;i++){
        int alp;
        cin>>alp;
        if(m1<r/alp){
            m1=r/alp;
            b1=r%alp;
        }
        if(m1==r/alp){
            m1=r/alp;
            if(b1<r%alp){
                b1=r%alp;
            }
        }
    }
    int mx=0;
    for(int j=0;j<m;j++){
        int bet;
        cin>>bet;
        mx=max(mx,bet);
    }
    if(mx*m1+b1>r)
    cout<<mx*m1+b1<<"\n";
    else
        cout<<r<<"\n";
}
