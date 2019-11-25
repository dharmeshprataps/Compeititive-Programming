#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1]={0};
    int g=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[i]=x+g;
        g=a[i];
    }
    int mn=INT_MAX;
    int ans=m;
    for(int i=m;i<n;i++){
        if(mn>a[i]-a[i-m]){
            mn=a[i]-a[i-m];
            ans=i-m+1;
        }
    }
    cout<<ans;

}
