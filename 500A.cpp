#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    t--;
    int a[n];
    for(int i=0;i<n-1;i++)cin>>a[i];
    int i=0;
    int f=0;
   // cout<<"p";
    while(i<=t){
       // cout<<i<<"\n";
        i+=a[i];
        if(i==t){
            f=1;
            break;
        }
    }
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";


}
