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
    string s;
    string p;
    cin>>s>>p;
    unordered_map<string ,intl>um;
    string g="";
    um[s]=1;
    rep(i,s.length()/2+1){
        string alp="";
        g+=s[i];
        if((s.length()%(i+1)))
            continue;
        rep(j,s.length()/(i+1)){
            alp+=g;
        }
        if(s==alp)
            {um[g]=1;}
        //cout<<"p";
    }
    intl c=0;
    for(auto i=um.begin();i!=um.end();i++){
        if((p.length()%i->fir.length()))
            continue;
        string alp="";
        for(int j=0;j<(p.length()/i->fir.length());j++){
            alp+=i->fir;
        }
       // cout<<alp<<" "<<i->fir<<"\n";
        if(alp==p)
            c++;
    }

    cout<<c<<"\n";

}
