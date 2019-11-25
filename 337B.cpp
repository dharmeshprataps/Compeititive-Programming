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
    intl a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<fixed<<setprecision(10);
    double x=min(a,b);
    double y=max(c,d);
    double c1=c*(x/y);
    double d1=d*(x/y);
    //cout<<x<<" "<<y<<" "<<c1<< " "<<d1<< "\n";
    double s=a*b-c1*d1;
    s=s/(a*b);
    //cout<<s<<"\n";
    string alp=to_string(s);
    int k=0;
    //cout<<alp<<"\n";
    repr(i,alp.length()-1,0){
        k++;
        if(alp[i]=='.')
            break;
    }
    intl p=0;
    intl l=round(pow(10,k-1));
    rep(i,alp.length()){
        if(alp[i]!='.')
        p=p*10+(int(alp[i])-48);
        //cout<<int(alp[i])-48<<" "<<alp[i]<<" \n";
        //cout<<p<<"\n";
    }
    //cout<<p<<" "<<l<<"\n";
   intl hcf=__gcd(p,l);
    //cout<<hc
    cout<<p/hcf<<"\\"<<l/hcf<<"\n";
}
