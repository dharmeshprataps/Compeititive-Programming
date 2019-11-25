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
    intl n;
    cin>>n;
   // vector<intl>v;
    intl a[13]={0};
    intl b[13]={0};
    a[0]=0;
    b[0]=0;
    a[1]=9;
    b[1]=9;
    FOR(i,2,13){
        intl k=i*pow(10,i);
        b[i]=k+b[i-1];
        a[i]=2*k-b[i];
    }
    //rep(i,13)cout<<b[i]<<" ";cout<<"\n";
    //rep(i,13)cout<<a[i]<<" ";
    intl p=0;
    while(n>0){
        intl k =lower_bound(a,a+13,n)-a;
        if(a[k]<n){
            k++;
        }
        //if(k!=1)
        intl s=pow(10,k-1);
        if(k==1)
        s=0;
        cout<<s<<" ";
        n=n-s;
        if(s==0){
            cout<<"\n"<<n<<"\n";
            n=0;
        }
    }
    //cout<<p<<"\n";
}