#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#define int long long
#define mod 1000000007
#define maxN 1000001
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pip pair<int,pii>
#define vi vector<int>
#define vpi vector<pii >
#define endl

#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define FOR(a,b,c) for(int(a) = b;a<=c;a++)
#define repr(a,b,c) for(int(a) = b;a>=c;a--)
#define rep(i,n) for(int(i) = 0;i<n;i++)
#define fir first
#define sec second
#define beg begin()
#define e end()
#define len length()
using namespace std;
//using namespace __gnu_pbds;
const int inf = 0x3f3f3f3f3f3f3f3fll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;


main(){
    fastIO;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int rooms[10];
    memset(rooms,0,sizeof(rooms));
    rep(i,n){
        if(s[i]=='L'){
            rep(j,n){
                if(rooms[j])
                    continue;
                rooms[j]=1;
                break;
            }
        }
        else if(s[i]=='R'){
            repr(j,9,0){
                if(rooms[j])
                    continue;
                rooms[j]=1;
                break;
            }
        }
        else{
            rooms[s[i]-'0']=0;
        }
    }
    rep(i,10)cout<<rooms[i];
}
