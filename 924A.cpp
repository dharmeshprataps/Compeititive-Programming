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
intl n;
intl m;
char c[1000][1000];
int main(){
    cin>>n;
    cin>>m;
    vector<int>v[m];
    rep(i,n){
        rep(j,m){
            cin>>c[i][j];
            if(c[i][j]=='#')
            v[j].pb(i);
        }
    }
   // cout<<"ropso";
    rep(i,n){
        rep(j,m){
            if(c[i][j]=='#'){
                rep(k,v[j].size()){
               //     cout<<i<<" "<<j<<"\n";
                    if(v[j][k]==i)
                    continue;
                    rep(l,m){
                        if((c[v[j][k]][l]=='#' && c[i][l]!='#') || (c[i][l]=='#' && c[v[j][k]][l]!='#'))
                            {
                           // if(i==0 && k==2)
                           // cout<<l<<" "<<i<<" "<<k<<"\n";
                            cout<<"NO\n";
                            return 0;}
                    }
                }
            }
        }
    }
    cout<<"YES\n";
}
