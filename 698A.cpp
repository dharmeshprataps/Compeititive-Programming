#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dp[n+1][3];
    int a[n+1];
    dp[0][0]=0;
    dp[0][1]=0;
    dp[0][2]=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        dp[i][2]=dp[i-1][2];
        dp[i][1]=dp[i-1][1];
        dp[i][0]=max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
        if(a[i]==1 || a[i]==3)
        dp[i][1]=max(dp[i-1][0],dp[i-1][2])+1;
        if(a[i]==2 || a[i]==3)
        dp[i][2]=max(dp[i-1][0],dp[i-1][1])+1;
    }
//    for(int i=0;i<=n;i++){
//        cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<"\n";
//    }
    cout<<n-max(dp[n][0],max(dp[n][1],dp[n][2]))<<"\n";




}
