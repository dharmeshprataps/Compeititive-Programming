#include<bits/stdc++.h>
using namespace std;
vector<int>v[10000];
int visi[10000];
void dfs(int i){
    if(visi[i])
        return;
    visi[i]=1;
    cout<<i<<"\n";
    for(int j=0;j<v[i].size();j++){
        dfs(v[i][j]);
    }
}
int main(){
    int n;
    cin>>n;
    memset(visi,0,sizeof(visi));
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    dfs(1);

}
