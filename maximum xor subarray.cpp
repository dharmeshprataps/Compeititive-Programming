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
#define endl "\n"
#define INT_SIZE 32
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
    trie* a[2];
    int value;
    trie(){
        a[0]=a[1]=NULL;
        value=0;
    }
};
void insert(trie* root,intl t){
    trie* temp=root;
    repr(i,INT_SIZE-1,0){
        bool v= t & (1<<i);
        if(temp->a[v]==NULL)
            temp->a[v]=new trie();
        temp=temp->a[v];
    }
    temp->value=t;
    cout<<t<<"\n";
}
intl querry(trie* root,intl t){
    trie* temp=root;
    repr(i,INT_SIZE-1,0){
        bool val=t & (1<<i);
        //cout<<i<<" "<<val<<"\n";
        if(temp->a[1-val]!=NULL){
            temp=temp->a[1-val];
           // cout<<"hhhh";
            }
        else if(temp->a[val]!=NULL){
            temp=temp->a[val];
        }
    }
//cout<<temp->value<<"k "<<t<<"\n";
    return t^(temp->value);
}
int main(){
    intl n;
    cin>>n;
    intl arr[n];
    rep(i,n)cin>>arr[i];
    trie* root=new trie();
    insert(root,0);
    intl pre=0;
    intl mn=0;
    for(intl i=0;i<n;i++){

        pre=pre^arr[i];
       // cout<<pre<<"\n";
        mn=max(mn,querry(root,pre));insert(root,pre^arr[i]);
    }
    cout<<mn<<"\n";
}
