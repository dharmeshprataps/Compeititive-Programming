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
    intl t;
    cin>>t;
    fastIO;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        //TTT(7)=0, TTH(6)=1, THT(5)=2, THH(4)=3, HTT(3)=4, HTH(2)=5, HHT(1)=6 , HHH(0)=7
        //T=1 H=0
        intl um[8]={0,0,0,0,0,0,0,0};
        intl h=0;
        map<char,int>m;
        m['T']=0;
        m['H']=1;
        rep(i,s.len-2){
            int a=m[s[i]];
            int b=m[s[i+1]];
            int c=m[s[i+2]];
            h=a*4+b*2+c;
            um[h]++;
        }
        //cout<<"\n";
        cout<<n<<" ";
        for(intl i=0;i<=7;i++){
            cout<<um[i];
            cout<<" ";
        }
        cout<<"\n";

    }

}