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
    trie(){
        for(int i=0;i<26;i++)um[i]=NULL;
        eof=false;
    }
};
void insert(trie* root,string s){
    trie* temp=root;
    rep(i,s.length()){
        intl inde=s[i]-'a';
        trie* node=temp->um[inde];
        if(!node){
            temp->um[inde]=new trie();
        }
        temp=temp->um[inde];
    }
    temp->eof=true;
   // cout<<s<<"\n";
}
void print(trie* node ,string s){
    if(node==NULL)
        return;
    if(node->eof==true){
        cout<<s<<"\n";
    }
    for(auto i=0;i<26;i++){
       // cout<<s+char(int('a')+i)<<"\n";
        print(node->um[i],s+char(int('a')+i));
    }
}
void search(trie* root,string s){
    trie* temp=root;
    string p="";
    rep(i,s.length()){
        intl inde=s[i]-'a';
        if(!temp->um[inde]){
            cout<<"0\n";
            insert(root,s);
            return;
        }
        p+=s[i];
        temp=temp->um[inde];
    }
    print(temp,p);
}
int main(){
    intl n;intl q;
    cin>>n;cin>>q;

    trie* root=new trie();
    rep(i,n){
        string s;
        cin>>s;
        insert(root,s);
    }

    while(q--){
        string s;
        cin>>s;
        search(root,s);
    }
}
