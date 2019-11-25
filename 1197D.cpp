#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl n,m,k;
    cin>>n>>m>>k;
    intl a[n];
    intl b[n];
    intl x=0;
    for(intl i=0;i<n;i++){cin>>a[i];b[i]=x+a[i];x=b[i];}
    intl dp[n+1];
    for(int i=0;i<n+1;i++)dp[i]=0;
    int ls=0;
    intl mx=0;
    intl p=0;
    dp[0]=max(p,a[0]-k);
    for(int i=1;i<n;i++){
//        int f=0;
//        if(dp[i-1]==0 && i!=0){
//            f=1;
//        }
        cout<<dp[i-1]+a[i]-k*ceil((i-ls+1)/3.0) <<" "<<ceil((i-ls+1)/3.0)<<"\n";
        if(dp[i-1]+a[i]-k*ceil((i-ls+1)/3.0)>0){
            dp[i]=dp[i-1]+a[i]-k*ceil((i-ls+1)/3.0);
        }
        else{
            intl p=0;
            dp[i]=max(p,a[i]-k);
           // cout<<"h\n";
            ls=i;
        }
        mx=max(mx,dp[i]);
        //cout<<dp[i]<<" ";
    }
    cout<<"\n";
    cout<<mx<<"\n";

}

