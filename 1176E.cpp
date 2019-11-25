#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>v[],int n,int visi[],int dis[],int d){
    if(visi[n]){
        return ;
    }
    //cout<<'p';
    visi[n]=1;
    for(int i=0;i<v[n].size();i++){
            if(d==3){
                cout<<v[n][i]<<" ";
            }
        dis[v[n][i]]=d+1;
        dfs(v,v[n][i],visi,dis,d+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v[n+1];
        int mx=0;
        int mxi=-1;
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
            if(mx<v[a].size()){
                mx=v[a].size();
                mxi=a;
            }
            if(v[b].size()>mx){
                mx=v[b].size();
                mxi=b;
            }
        }
        int dis[n+1]={0};
        int visi[n+1]={0};
        int d=0;
        int o=0,e=0;
        //dfs(v,1,visi,dis,d);
        //cout<<"\n";
        queue<int>q;
        q.push(1);
        dis[1]=1;
        while(!q.empty()){
            int x=q.front();
            visi[x]=1;
            q.pop();
            for(int i=0;i<v[x].size();i++){
                if(visi[v[x][i]])
                    continue;
                dis[v[x][i]]=dis[x]+1;
                q.push(v[x][i]);
            }
        }
        for(int i=1;i<n+1;i++){
            //cout<<dis[i]<<" ";
            if(dis[i]%2==0)
                e++;
            else
                o++;
        }
        //cout<<"\n";
        if(o<e){
            cout<<o<<"\n";
            for(int i=1;i<n+1;i++){
                if(dis[i]%2!=0)cout<<i<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<e<<"\n";
            for(int i=1;i<n+1;i++){
                if(dis[i]%2==0)cout<<i<<" ";
            }
            cout<<"\n";
        }
    }

}
