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
    fastIO;
    intl u,p,up;
    intl n;
    cin>>u>>p>>up>>n;
    priority_queue<intl,vi,greater<intl>>pq1;
    priority_queue<intl,vi,greater<intl>>pq2;
    intl x;
    string s1;
    rep(i,n){
        cin>>x>>s1;
        if(s1=="USB")
            pq1.push(x);
        if(s1=="PS/2")
            pq2.push(x);
    }
    intl s=0;
    intl c=0;
    if(!pq1.empty())
    {rep(i,u){
        intl y=pq1.top();
        pq1.pop();
        s+=y;
        c++;
        if(pq1.empty())
            break;

    }}
    if(!pq2.empty()){
    rep(i,p){
        intl y=pq2.top();
        pq2.pop();
        s+=y;
        c++;
        if(pq2.empty())
            break;
    }
    }
    if(!pq1.empty() || !pq2.empty())
    rep(i,up){
        intl y;
        if(pq1.empty()){
            y=pq2.top();
            pq2.pop();
        }
        else if(pq2.empty()){
            y=pq1.top();
            pq1.pop();
        }
        else if(pq1.top()<pq2.top()){
            y=pq1.top();
            pq1.pop();
        }
        else{
            y=pq2.top();
            pq2.pop();
        }
        s+=y;
        c++;
        if(pq1.empty() && pq2.empty())
            break;
    }
    cout<<c<<" "<<s<<"\n";

}
