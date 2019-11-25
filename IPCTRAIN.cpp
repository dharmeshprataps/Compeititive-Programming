#include<bits/stdc++.h>
#define int long long
using namespace std;
bool compare(pair<int,pair<int,int>>p1,pair<int,pair<int,int>>p2){
    return p1.first>p2.first;
}
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int ar[d];
        priority_queue<pair<int,int>>pq;
        vector<pair<int,pair<int,int>>>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second.first>>v[i].second.second;
        }
        sort(v.begin(),v.end());
//        for(int i=0;i<n;i++){
//            cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<"\n";
//        }
        int i1=0;
        for(int i=1;i<=d;i++){
            while(i1<n && v[i1].first<=i){
                pq.push({v[i1].second.second,v[i1].second.first});
                i1++;
            }
            if(pq.size()==0){
                continue;
            }
            auto l=pq.top();
            pq.pop();
            l.second--;
            //cout<<i<<" "<<l.first<<"\n";
            if(l.second>0){
                pq.push(l);
            }
        }
        int ans=0;
        while(!pq.empty()){
            auto x=pq.top();
            pq.pop();
            //cout<<x.first<<" oo "<<x.second<<"\n";
            ans+=((x.first)*(x.second));
        }
        cout<<ans<<"\n";
    }

}
