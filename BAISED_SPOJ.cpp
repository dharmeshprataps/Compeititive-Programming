#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>um;
        string s;int k;
        for(int i=0;i<n;i++){
            cin>>s>>k;
           // cout<<s<<" "<<k<<"\n";
            um[k]++;
        }
        set<int>v;
        for(int i=1;i<=n;i++){
            if(!um[i]){
                v.insert(i);
            }
        }
        int ans=0;
        for(auto i=um.begin();i!=um.end();i++){
            if(i->second>1){
                int k=i->second;
                k--;
                while(k--){
                    auto it=v.begin();
                    ans+=abs(i->first-*it);
                   // cout<<i->first<<" "<<*it<<"\n";
                    v.erase(it);
                }
            }
        }
        cout<<ans<<"\n";
    }
}
