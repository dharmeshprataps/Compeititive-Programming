#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long int c[m+1]={0};
        long int d[n+1][3];
        for(int i=1;i<=m;i++){
            cin>>c[i];
        }
        vector<pair<int,int>>p[m+1];
        long int c1[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>d[i][0]>>d[i][1]>>d[i][2];
            p[d[i][0]].push_back({d[i][1],i});
        }
        vector<pair<long int,int>>v;
        for(int i=1;i<=m;i++){
           // cout<<c[i]<<" "<<p[i].size()<<"\n";
            while(c[i]<p[i].size()){
                //cout<<"k";
                v.push_back(p[i][p[i].size()-1]);
                p[i].pop_back();
            }
        }
        //cout<<"lll";
        int j=0;
        long int d1[n+1]={0};
        long int su=0;
        for(int i=1;i<m+1;i++){
            while(c[i]>p[i].size() && j<v.size()){
                //cout<<"t";
                d1[v[j].second]=i;
                //cout<<v[j].first<<" oo "<<v[j].second<<" "<<i<<"\n";
                su+=d[v[j].second][2];
                j++;
                c[i]--;
            }
        }
        //cout<<"l";
        for(int i=1;i<=m;i++){
            while(!p[i].empty()){

                auto k=p[i][p[i].size()-1];
                d1[k.second]=i;
          //      cout<<k.first<<" ll "<<k.second<<" "<<i<<"\n";
                su+=k.first;
                p[i].pop_back();
            }
        }
        cout<<su<<"\n";
        for(int i=0;i<n;i++){
            cout<<d1[i]<<" ";
        }
        cout<<"\n";
    }
}
