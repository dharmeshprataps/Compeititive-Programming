#include<bits/stdc++.h>
#define int long long
#define inf 99999999999999999
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int dp[n+1][2];
        string s;
        cin>>s;
        //if(s[0]=='1'){
        dp[0][0]=b;
        dp[0][1]=inf;
        //}
        //else{
          //  dp[0][0]=b;
        //dp[0][1]=2*b;
        //}
        for(int i=0;i<n-1;i++){
            if(s[i+1]=='0' && s[i]=='0'){
                dp[i+1][0]=min(dp[i][0]+b+a,dp[i][1]+b+2*a);
                dp[i+1][1]=min(dp[i][0]+2*b+2*a,dp[i][1]+2*b+a);
            }
            else if(s[i]=='1' && s[i+1]=='1'){
                dp[i+1][0]=inf;
                dp[i+1][1]=dp[i][1]+2*b+a;
            }
            else if(s[i]=='1' && s[i+1]=='0'){
                dp[i+1][0]=inf;
                dp[i+1][1]=dp[i][1]+2*b+a;
            }
            else if(s[i]=='0' && s[i+1]=='1'){
                dp[i+1][1]=min(dp[i][0]+2*a+2*b,dp[i][1]+a+2*b);
                dp[i+1][0]=inf;
            }

        }
       // for(int i=0;i<n;i++)cout<<dp[i+1][0]<<" "<<dp[i+1][1]<<"\n";
       // if(s[i])
        cout<<min(dp[n-1][0]+a+b,dp[n-1][1]+min(2*a+b,a+2*b))<<"\n";
    }
}
