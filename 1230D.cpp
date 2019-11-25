#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        string s,p;
        cin>>s>>p;
        unordered_map<char,int>um;
        multimap<char,int>um2;
        for(int i=0;i<s.length();i++){
            um[s[i]]++;
        }
        for(int j=0;j<n;j++){
            um[p[j]]--;
            um2.insert({p[j],j});
        }
        int f=0;
        for(auto i=um.begin();i!=um.end();i++){
            if(!i->second){
                f=1;
            }
        }
        if(f){
            cout<<"-1\n";
            continue;
        }
        int p=0;
        for(int i=0;i<n;i++){
            if(p>um2[s[i]]){
                c++;
                p=um2[s[i]];
            }
        }
    }


}
