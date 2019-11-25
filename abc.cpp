#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dp[1000];
    dp[1]=1;
    dp[2]=5;
    dp[3]=13;
    for(int i=4;i<105;i++){
        dp[i]=dp[i-1]+4*(i-1);
    }
    cout<<dp[n]<<"\n";
}
