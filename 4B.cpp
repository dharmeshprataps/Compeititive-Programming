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
int main(){
    intl n,sumtime;
    cin>>n>>sumtime;
    intl a[n][2];
    intl st=0;
    rep(i,n){cin>>a[i][0]>>a[i][1];st+=a[i][0];}
    sumtime-=st;
    if(sumtime<0){
        cout<<"NO\n";
        return 0;
    }
    if(sumtime==0){
        cout<<"YES\n";
        rep(i,n)cout<<a[i][0]<<" ";cout<<"\n";
        return 0;
    }
    rep(i,n){
        sumtime-=(a[i][1]-a[i][0]);
        if(sumtime<=0){
            cout<<"YES\n";
            if(sumtime<0){
                rep(j,i)cout<<a[j][1]<<" ";
                cout<<a[i][1]+sumtime<<" ";
                intl j=i+1;
                while(j<n)cout<<a[j++][0]<<" ";
                return 0;
            }
            rep(j,i+1)cout<<a[j][1]<<" ";
            intl j=i+1;
            while(j<n)cout<<a[j++][0]<<" ";
            return 0;
        }
    }
    if(sumtime>0){
        cout<<"NO\n";
        return 0;
    }


}
