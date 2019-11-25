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
struct trie{
    trie* um[26];
    bool eof;
    intl words;
    trie(){
        eof=false;
        rep(i,26){
            um[i]=NULL;
            words=0;
        }
    }
};
void insert(trie* root,string s){
    trie* temp=root;
    rep(i,s.length()){
        intl inde=s[i]-'a';
        if(temp->um[inde]==NULL){
            temp->um[inde]=new trie();
        }
        temp=temp->um[inde];

    }
    temp->eof=true;
    temp->words++;
}
intl dfs(trie* root){
    if(!root)
        return 0;
    intl s=root->words;
    rep(i,26){
        s=s+dfs(root->um[i]);
    }
    root->words=s;
    return s;
}
intl search(trie* root,string s){
    trie* temp=root;
    rep(i,s.length()){
        intl inde=s[i]-'a';
        if(temp->um[inde]==NULL){
            return 0;
        }
        temp=temp->um[inde];
    }
    return temp->words;

}
int main(){
    //fastIO;
    intl n,q;
    cin>>n>>q;
    trie* root=new trie();
    while(n--){
        string s;
        cin>>s;
        insert(root,s);
    }
    dfs(root);
    while(q--){
        string s;
        cin>>s;
        cout<<search(root,s)<<"\n";
    }

}
