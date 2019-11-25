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
    string s;
    intl l=0;
    cin>>s;
    while(s[0]!='-'){
        l++;
        stack<char>s1;
        intl i=0;
        while(i<s.len){
            if(s1.empty()){
                s1.push(s[i++]);
            }
            else if(s1.top()=='}'){
                s1.push(s[i++]);
            }
            else if(s1.top()=='{' && s[i]=='}'){
                s1.pop();
                i++;
            }
            else{
                s1.push(s[i]);
                i++;
            }
        }if(s1.empty()){
        cout<<l<<". "<<0<<"\n";
        cin>>s;continue;}
        //cout<<s1.size()<<"\n";
        char z=s1.top();
        s1.pop();
        intl ans=0;
        
        while(!s1.empty()){
            //cout<<z<<" ";
            if(z=='{' && s1.top()=='}')
            {    ans+=2;s1.pop(); }
            else if(z=='{' && s1.top()=='{')
            {
                ans++;s1.pop();
            }
            else if(z=='}' && s1.top()=='}')
            {ans++; s1.pop();}
            z=' ';
            if(!s1.empty())
            {z=s1.top();
            s1.pop();}
        }
        if(z!=' ')
        ans++;
        cout<<l<<". "<<ans<<"\n";
        cin>>s;
    }
}