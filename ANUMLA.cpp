#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s1=round(pow(2,n));
        map<int,int>um;
        vector<int>pq;
        vector<int>v;
        int f1=1;
        for(int i=0;i<s1;i++){
            int x;
            cin>>x;
            if(f1 && !x){
                f1=0;
                continue;
            }
            pq.push_back(x);
        }
        sort(pq.begin(),pq.end());
        int k=0;
        unordered_set<int>s,w;
        int i1=0;
        while(i1<s1 && v.size()<n){
            if(v.empty()){
                v.push_back(pq[i1]);
                i1++;
                continue;
            }
            if(w.find(pq[i1])==w.end()){
                for(auto j=s.begin();j!=s.end();j++){
                    s.insert(pq[i1]+*j);
                    w.insert(pq[i1]+*j);
                }
                for(int j=0;j<v.size();j++){
                    s.insert(pq[i1]+v[j]);
                    w.insert(pq[i1]+v[j]);
                }
                v.push_back(pq[i1]);
                //for(auto i=s.begin();i!=s.end();i++)cout<<*i<<" ";cout<<pq[i1]<<"\n";

            }
            else{
                w.erase(pq[i1]);
            }
            i1++;
        }
        for(int i=0;i<n;i++)cout<<v[i]<<" ";
        cout<<"\n";
    }
}
