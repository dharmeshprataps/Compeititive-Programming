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
//20
//
//414468312 20329584 106106409 584924603 666547477 670032002 726095027 276840253 368277336 940941705 531635095 213813062 440421387 959075599 240727854 495316522 838268432 786936631 586382273 806443734
//
//3 1 2 3 3 2 2 1 3 2 3 2 3 3 3 2 1 3 1 2
//
//3 1 2 2 2 2 3 1 2 3 2 1 1 2 3 1 2 3 3 2
//
//40
//
//1 1 2 1 3 2 3 1 3 3 1 2 3 1 1 1 2 3 3 1 3 1 3 1 2 2 3 3 1 2 1 2 3 2 2 1 2 1 2 2
//
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
const int inf = 0x3f3f3f3f3f3f3f3fll;
//typedef tree<intl,null_type,less<intl>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//typedef tree<intl,null_type,less_equal<intl>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
int main(){
    fastIO;
    int n;
    cin>>n;
    intl p[n];
    rep(i,n)cin>>p[i];
    intl a[n];
    rep(i,n)cin>>a[i];
    intl b[n];
    rep(i,n)cin>>b[i];
    priority_queue<intl,vi,greater<intl>>pq1;
    priority_queue<intl,vi,greater<intl>>pq2;
    priority_queue<intl,vi,greater<intl>>pq3;
    rep(i,n){
        if(a[i]==1 || b[i]==1)
            pq1.push(p[i]);
        if(a[i]==2 || b[i]==2)
            pq2.push(p[i]);
        if(a[i]==3 || b[i]==3)
            pq3.push(p[i]);
    }
    intl m;
    cin>>m;
    int r=-1;
    unordered_map<intl,int>um;
    vi v;
    rep(i,m){
        int x;
        cin>>x;
        r=-1;
        if(x==1){
            while(!pq1.empty() && um[pq1.top()]==1){
                pq1.pop();
            }
            if(!pq1.empty()){
            r=pq1.top();
            pq1.pop();
            }
        }
        else if(x==2){
            while(!pq2.empty() && um[pq2.top()]==1){
                pq2.pop();
            }
            if(!pq2.empty())
            {r=pq2.top();pq2.pop();}

        }
        else if(x==3){
            while(!pq3.empty() && um[pq3.top()]==1){
                pq3.pop();
            }
            if(!pq3.empty())
            {r=pq3.top();pq3.pop();}

        }
        if(r!=-1)
        um[r]=1;
        v.pb(r);
    }
    rep(i,m)cout<<v[i]<<" ";
}
