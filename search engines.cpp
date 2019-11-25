#include<bits/stdc++.h>
using namespace std;
struct trie{
    trie* c[26];
    bool eof;
    int pri;
    trie(){
        for(int i=0;i<26;i++)c[i]=NULL;
        eof=false;
        pri=-1;
    }
};
void insert(trie* root, string s,int x){
    trie* temp=root;
    for(int i=0;i<s.length();i++){
        int inde=s[i]-'a';
        if(temp->c[inde]==NULL)
            temp->c[inde]=new trie();
        temp=temp->c[inde];
    }
    //cout<<s<<"\n";
    temp->pri=x;
    //cout<<temp->pri<<"\n";
    temp->eof=true;
}
int check(trie* root){
    if(root==NULL)
    return 0;
    if(root->eof==true)
    return root->pri;
    int mx=0;
    for(int i=0;i<26;i++){
        mx=max(mx,check(root->c[i]));
        //cout<<mx<<"\n";
    }
    return mx;
}
int querry(trie* root,string s){
    trie* temp=root;
    for(int i=0;i<s.length();i++){
        int inde=s[i]-'a';
        if(temp->c[inde]==NULL){
            return -1;
        }
        temp=temp->c[inde];
    }
    return check(temp);
}
int main(){
    int n,q;
    cin>>n>>q;
    trie* root=new trie();
    while(n--){
        string s;
        cin>>s;
        int x;
        cin>>x;
        insert(root,s,x);
    }
    while(q--){
        string s;
        cin>>s;
        cout<<querry(root,s)<<"\n";
    }

}
