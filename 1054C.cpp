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
bool compare(pii p,pii q){
    if(p.fir<q.fir)
        return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    intl l[n];
    intl r[n];
    rep(i,n)cin>>l[i];
    rep(i,n)cin>>r[i];
    priority_queue<pii>pq;
    rep(i,n)pq.push({1,i});
    rep(i,n){
        vpi v;
        if(i!=0){
            int f=0;
            if(l[i-1]<=l[i]){
                while(f<(l[i]-l[i-1]) && !pq.empty()){
                    pii x=pq.top();
                    pq.pop();
                    v.pb(x);
                    if(v[v.size()-1].sec<i){
                        f++;
                        v[v.size()-1].fir++;
                    cout<<"l";
                    }
                }
                if(f!=(l[i]-l[i-1])){
                    cout<<"NO\n";return 0;
                }
                rep(l1,v.size())pq.push(v[l1]);
            }
            else{
                while(f<(l[i]-l[i-1]) && !pq.empty()){
                    v.pb(pq.top());
                    pq.pop();
                    if(v[v.size()-1].sec<i)
                    f++;
                    cout<<"k";
                }
                int alp=v[v.size()-1].fir;
                rep(l,v.size())pq.push(v[l]);
                v.clear();
                while(!pq.empty()){
                        cout<<"m";
                    v.push_back(pq.top());
                    pq.pop();
                    if(v[v.size()-1].sec==i)
                        v[v.size()-1].fir=alp;
                }
                rep(l1,v.size())pq.push(v[l1]);
            }
        }
        else{
            if(l[i]!=0){
                cout<<"NO\n";
                return 0;
            }
        }
    }
    int a[n];
    while(!pq.empty()){
        pii al=pq.top();
        pq.pop();
        a[al.sec]=al.fir;
    }
    rep(i,n)
    cout<<a[i]<<" ";cout<<"\n";
}
