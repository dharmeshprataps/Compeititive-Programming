#include<bits/stdc++.h>
using namespace std;

int n,a,b,c;
int dp[100000];
int func(int n1){
    if(n1<0){
        return INT_MIN;
    }
    if(n1==0){
        return 0;
    }
    if(dp[n1]!=-1)
        return dp[n1];
    return dp[n1]=max(1+func(n1-a),max(1+func(n1-b),1+func(n1-c)));


}
int main(){
    //int n,a,b,c;
    cin>>n>>a>>b>>c;
    memset(dp,-1,sizeof(dp));
    cout<<func(n)<<"\n";
//    for(int i=0;i<n;i++){
//        cout<<dp[i]<<" ";
//    }
}
