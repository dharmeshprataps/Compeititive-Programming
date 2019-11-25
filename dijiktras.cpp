#include<bits/stdc++.h>
using namespace std;
vector<int>v[10000];
int w[1000][1000];
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    memset(w,0,sizeof(w));
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back(b);
        v[b].push_back(a);
        w[a][b]=c;
        w[b][a]=c;
    }
    int s;
    cin>>s;
    int d;
    cin>>d;
    vector<int>visi;
    unordered_set<int>p;
    p.insert(s);
    int dis[n+1];
    memset(dis,-1,sizeof(dis));
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(int i=0;i<v[s].size();i++){
        pq.push({w[s][v[s][i]],v[s][i]});
    }
    while(p.size()!=n || pq.empty()){
        auto l=pq.top();
        cout<<l.first<<" "<<l.second<<"\n";
        pq.pop();
        dis[l.second]=l.first;
        int r=l.second;
        p.insert(r);
        for(int i=0;i<v[r].size();i++){
            if(dis[v[r][i]]!=-1)
                continue;
            pq.push({dis[r]+w[r][v[r][i]],v[r][i]});
        }
    }
    for(int i=0;i<n;i++)
    cout<<dis[i]<<" ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<w[i][j]<<" ";
        }
        cout<<"\n";
    }
//    9
//14
//0 1 4
//2 1 8
//2 3 7
//3 4 9
//2 5 4
//0 7 8
//1 7 11
//2 8 2
//3 5 14
//4 5 10
//5 6 2
//6 7 1
//7 8 7
//6 8 6
//0
}
