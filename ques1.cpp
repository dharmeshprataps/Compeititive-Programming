#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    int mx=a[1];
    int k=0;
    for(int i=1;i<=n;i++){
        mx=max(mx,a[i]);
        if(i>=mx){
           // cout<<mx<<" "<<i<<"\n";
            k++;
        }
    }
    cout<<k<<"\n";
}
