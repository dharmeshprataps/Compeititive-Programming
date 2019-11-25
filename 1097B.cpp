#include<bits/stdc++.h>
using namespace std;
int a[20];
int n;
int func(int i, int su){
    if(su==0 && i==n)
        return 1;
    if(i>n)
        return 0;
    return (func(i+1,(su+a[i])%360)||func(i+1,abs(su-a[i])%360));

}
int main(){
   // int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    if(func(0,0))
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
