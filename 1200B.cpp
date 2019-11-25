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
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        m++;
        int f=1;
        FOR(i,0,n-1){
            int f1=1;
            if(abs(a[i]-a[i+1])<k){
                if(m){
                    if(abs(a[i]+1-a[i+1])>=k){
                        f1=0;
                        m--;
                        continue;
                    }
                }
                cout<<a[i]<<" "<<a[i+1]<<" "<<m<<"\n";
                cout<<"NO\n";
                f=0;
                break;
            }
            if(f1)
            m++;
        }
        if(f){
            cout<<"YES\n";
        }

    }
}
