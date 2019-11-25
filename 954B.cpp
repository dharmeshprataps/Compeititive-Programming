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
string s;
bool check(string y){
    int a=y.length();
    for(int i=0;i<a;i++){
        if(s[a+i]!=y[i])
            return false;
    }
    return true;
}
int main(){
    fastIO;
    int n;
    cin>>n;
    //string s;
    cin>>s;
    string y="";
    int k=0;
    int fla=1;
    int mx=0;
    rep(i,n){
        if(check(y) && y.length()!=0 && fla){
            //k++;
            //cout<<"BLA";
            mx=max(mx,int(y.length())-1);
        }
        y+=s[i];
        k++;

       // cout<<y<<"\n";
        i=y.length()-1;
    }
    cout<<k-mx<<"\n";
}
