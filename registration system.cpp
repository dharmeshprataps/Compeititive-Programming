

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
        unordered_map<char,struct trie*>um;
        bool eof;
        intl c;
        trie(){
            eof=false;
            c=-1;
        }
    };
    typedef struct trie trie;
    void ins(trie* root,string s){
        trie* temp=root;
        rep(i,s.length()){
            if(temp->um[s[i]]==NULL){
                temp->um[s[i]]=new trie();
            }
            temp=temp->um[s[i]];
        }
        temp->eof=true;
    }
    trie* fnd(trie* root ,string s){
        trie* node=root;
        trie* node1=new trie();
        rep(i,s.length()){
            if(node->um[s[i]]==NULL){
                return node1;
            }
            node=node->um[s[i]];
        }
        return node;
    }
    int main(){
        intl n;
        trie* root=new trie();
        cin>>n;
        rep(i,n){
            string s;
            cin>>s;


            trie* newnode=fnd(root,s);
            if(newnode->eof==false){
                cout<<s<<"\n";ins(root,s);
            }
            else{
                while(true){
                    newnode->c++;

                    intl c=newnode->c;//cout<<c<<"\n";
                    trie* newnode1=fnd(root,s+to_string(c));
                    if(newnode1->eof==false){
                        cout<<s+to_string(c)<<"\n";
                        ins(root,s+to_string(c));
                        break;
                    }
                }
            }
        }
    }
