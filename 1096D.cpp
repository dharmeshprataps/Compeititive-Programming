#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define fi first
#define se second
#define pub push_back
#define endl "\n"
#define mkp make_pair
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
//int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
//int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<<endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr:v){cout<<itr<<' ';}cout<<endl;
#define init(v,x) for (auto &itr:v){itr=x;}
#define minpq(x) x,vector<x>,greater<x>
#define ln length()
#define sz size()
const int mod=1e9+7;
//int dsu[200005];
//int root(int i){while(i!=dsu[i]){dsu[i]=dsu[dsu[i]];i=dsu[i];}return i;}
//void unionn(int a,int b){int ra=root(a),rb=root(b);if(ra==rb){return;}if(ra<rb){dsu[rb]=dsu[ra];}else{dsu[ra]=dsu[rb];}}
int arr[100005];
int dp[5][100005];

main(){
    fastIO
    int n;
    cin >>n;
    string str;
    cin >>str;
    str=' '+str;
    rep(i,1,n+1){cin>>arr[i];}
    string pat="hard";
    rep(i,0,4){
        rep(j,1,n+1){
            if(str[j]==pat[i]){
                if(i==0){dp[i][j]=arr[j]+dp[i][j-1];continue;}
                dp[i][j]=min(dp[i-1][j-1],dp[i][j-1]+arr[j]);
            }
            else
                dp[i][j]=dp[i][j-1];
        }
    }
    //print2d(dp,3,n+1);
    cout<<dp[3][n];
}
