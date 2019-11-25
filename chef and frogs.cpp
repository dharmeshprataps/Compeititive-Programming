#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,p;
    cin>>n>>k>>p;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
    sort(a,a+n);
    map<int,int>dp;
    int l=1;
    dp[0]=1;
    for(int i=1;i<n-1;i++){
        if(a[i]-a[i-1]<=k){
            dp[a[i]]=dp[a[i-1]];
        }
        else{
            dp[a[i]]=dp[a[i-1]]+1;
        }
    }
    for(auto i=dp.begin();i!=dp.end();i++){
        cout<<i->first<<" "<<i->second<<"\n";
    }
    while(p--){
        int a1,b1;
        cin>>a1>>b1;
        if(dp[b[a1-1]]==dp[b[b1-1]]){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}
