#include<bits/stdc++.h>
#define intl long long
using namespace std;
intl n,k,a[200050],mx,ans,l,r,z;
vector<intl>v;
int main(){
    cin>>n>>k;
    intl b[n];
    intl x=0;
    b[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i]+x;
        x=b[i];
    }
    intl dp[n+1]={0};
    intl dpi[n+1];
    memset(dpi,-1,sizeof(dpi));
    intl p=-1;
    for(intl i=1;i<=k;i++)dp[i]=b[i],dpi[i]=max(p,i-k+1);
    intl mx=dp[k];
    for(int i=k+1;i<=n;i++){
        if(dp[i-1]<b[i]-b[i-k]){
            dp[i]=b[i]-b[i-k];
            dpi[i]=i-k+1;
        }
        else{
            dp[i]=dp[i-1];
            dpi[i]=dpi[i-1];
        }
    }
    mx=0;
    int mxi=-1;
    int mxe=-1;
    for(int i=2*k;i<=n;i++){
        if(mx<b[i]-b[i-k]+dp[i-k]){
            mx=b[i]-b[i-k]+dp[i-k];
            mxi=i-k+1;
            mxe=dpi[i-k];
        }
    }
//    for(int i=1;i<=n;i++)cout<<dp[i]<<" ";cout<<"\n";
//    for(int i=1;i<=n;i++)cout<<dpi[i]<<" ";cout<<"\n";
    cout<<mxe<<" "<<mxi<<"\n";
}
