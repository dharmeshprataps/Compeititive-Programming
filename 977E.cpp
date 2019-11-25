#include<bits/stdc++.h>
using namespace std;
void dfs(vector<long int>v[],long int j,long int k,long int visi[]){
    visi[j]=k;
    for(int i=0;i<v[j].size();i++){
        if(visi[v[j][i]])
            continue;
        dfs(v,v[j][i],k,visi);
    }
}
int main(){
    long int n,m;
    cin>>n>>m;
    vector<long int>v[n+1];
    for(long int i=0;i<m;i++){
        long int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    long int k=1;
    long int visi[n+1]={0};
    for(long int i=1;i<n+1;i++){
        if(!visi[i])
            dfs(v,i,k++,visi);
    }
    long int raa[k]={0};
    for(long int i=1;i<=n;i++){
        if(visi[i]){
            if(v[i].size()!=2){
                raa[visi[i]]=1;
            }
        }
    }
   // vector<int>ve;
    long int co=0;
    for(long int i=1;i<k;i++){
        if(!raa[i]){
            //cout<<i<<"\n";
            //ve.push_back(i);
            co++;
        }
    }
    cout<<co<<"\n";
}
