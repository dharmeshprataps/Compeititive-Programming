#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000];
int level[100000];
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    level[0]=0;
    memset(level,0,sizeof(level));
    queue<int>q;
    q.push(0);
    int visi[100000]={0};
    visi[0]=1;
    while(!q.empty()){
        int k=q.front();
        q.pop();
        for(int i=0;i<v[k].size();i++){
            if(visi[v[k][i]])
                continue;
            q.push(v[k][i]);
            level[v[k][i]]=level[k]+1;
            visi[v[k][i]]=1;
        }
    }
    for(int i=0;i<n+1;i++)cout<<i<<" "<<level[i]<<" "<<visi[i]<<"\n";cout<<"\n";


}
