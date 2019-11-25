#include<bits/stdc++.h>
using namespace std;
int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int>s,w;
        int arr[n];for(int i=0;i<n;i++){cin>>arr[i];s[arr[i]]=1;}
        //int a[n][n];
        w[0]=1;
        int ans=0;
        //cout<<"alpha\n";
        for(auto i=s.begin();i!=s.end();i++){
            vector<pair<int,int>>v;
            if(i->first==1){
                ans++;
            }
            for(auto j=w.begin();j!=w.end();j++){
                int k=__gcd(i->first,j->first);
                if(k==1){
                    ans+=j->second;
                }
                v.push_back({k,j->second});
                //cout<<k<<"\n";
            }
            for(int i=0;i<v.size();i++){
                w[v[i].first]+=v[i].second;
            }
           // cout<<"\n";
        }
        cout<<ans<<"\n";
    }

}
