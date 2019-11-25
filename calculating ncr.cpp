#include<bits/stdc++.h>
#define intl long long
#define mod 1000000007
using namespace std;
int main(){
    int dp[1001][1001];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<1001;i++){
        for(int j=0;j<1001;j++){
            if(j==0 || j==n){
                dp[i][j]=1;
            }
            else
                dp[i][j]=(dp[i-1][j-1]%mod+dp[i-1][j]%mod)%mod;
        }
    }
}
