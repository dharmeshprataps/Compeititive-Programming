#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1;
        return 0;
    }
    long long int k=m/n;
    long int t=0;
    int f=1;
    //cout<<k<<"\n";
    while(k!=1){
        long long int p=k;
        cout<<k<<"\n";
        if(k%2==0){
            k=k/2;
            t++;
        }
        if(k%3==0){
            k=k/3;
            t++;
        }
        if(p==k){
            cout<<"-1";
            f=0;
            break;
        }
    }
    if(f)
    cout<<t;
}
