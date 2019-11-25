#include<bits/stdc++.h>
#define intl long long
using namespace std;
vector<int>v[500009];
int n;
void dfs(int i,int visi[],int x){
    if(visi[i]==-1)
        return ;
    visi[i]=x;
    for(int j=0;j<v[i].size();j++){
        dfs(v[i][j],visi,x);
    }
}
int main(){
    cout<<"ppp\n";
    int m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int k;cin>>k;

        int a;
        if(k!=0)
        cin>>a;
        for(int j=1;j<k;j++){
            int x;
            cin>>x;
            v[a].push_back(x);
            v[x].push_back(a);
        }
    }
    int visi[1000000];
    memset(visi,-1,sizeof(visi));
    int x=1;
    for(int i=1;i<=n;i++){
        if(visi[i]==-1){
            dfs(i,visi,x);
            x++;
        }
    }
    unordered_map<int,int>um;
    for(int i=1;i<=n;i++){
        um[visi[i]]++;
        cout<<visi[i]<<" ";
    }
    cout<<"\n";
    for(int i=1;i<=n;i++){
        if(um[visi[i]]==-1){
            cout<<1<<"\n";
        }
        else{
            cout<<um[visi[i]]<<" ";
        }
    }
}
