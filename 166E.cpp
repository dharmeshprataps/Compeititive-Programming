#include<bits/stdc++.h>
using namespace std;
long long int dp[10000009][2];
#define M 1000000007
int main(){
    int n;
    cin>>n;
    dp[1][0]=0;
    dp[1][1]=1;
    for(int i=2;i<=n;i++){
        dp[i][0]=(3*dp[i-1][1])%M;
        dp[i][1]=(dp[i-1][0]%M+(2*dp[i-1][1])%M)%M;
    }
    for(int i=0;i<n;i++)cout<<dp[i][0]<<" "<<dp[i][1]<<"\n";cout<<"\n";

    cout<<dp[n][0]<<"\n";
}
