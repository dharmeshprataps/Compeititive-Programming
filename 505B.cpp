#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<int>v[],int a,int b,int visi[]){
    //cout<<a<<"\n";
    visi[a]=1;
    for(int i=0;i<v[a].size();i++){
        if(visi[v[a][i]]){
            //cout<<a<<" sad "<<v[a][i]<<"\n";
            continue;
        }
        if(v[a][i]==b){
            //cout<<"Hurray "<<a <<" "<<b<<"\n";
            return true;
        }
        if(dfs(v,v[a][i],b,visi))
            return true;
    }
    visi[a]=0;
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v[m+1][n+1];
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v[c][b].push_back(a);
        v[c][a].push_back(b);
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        int c=0;
        for(int i=0;i<=m;i++){
          //  cout<<i<<" i "<<"\n";
            int visi[n+1]={0};
            if(dfs(v[i],a,b,visi)){
                c++;
            }
        }
        cout<<c<<"\n";
    }



}
