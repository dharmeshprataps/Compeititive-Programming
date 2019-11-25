#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#define intl long long
#define mod 1000000007
#define maxN 1000001
#define pb push_back
#define mp make_pair
#define pii pair<intl,intl>
#define pip pair<intl,pii>
#define vi vector<intl>
#define vpi vector<pii >
#define endl 

#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define FOR(a,b,c) for(intl(a) = b;a<=c;a++)
#define repr(a,b,c) for(intl(a) = b;a>=c;a--)
#define rep(i,n) for(intl(i) = 0;i<n;i++)
#define fir first
#define sec second
#define beg begin()
#define e end()
#define len length()
using namespace std;
//using namespace __gnu_pbds;
const intl inf = 0x3f3f3f3f3f3f3f3fll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
intl a[20001];
intl n;
intl dp[2001][2001];
intl func(intl i,intl j){
    if(i>n || j<=0){
        return 0;
    }
    intl year=n-j+i;
    if(i>j){
        return 0;
    }
    if(dp[i][j]!=-1)
    return dp[i][j];
    return dp[i][j] = max(a[i]*year + func(i+1,j),a[j]*year+ func(i,j-1));
}
int main(){
    //intl n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    rep(i,n)cin>>a[i];
    cout<<func(0,n-1)<<"\n";
    
}