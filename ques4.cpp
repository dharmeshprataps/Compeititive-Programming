#include<bits/stdc++.h>
using namespace std;
vector<long long int>adj12[1000006];
long long int ans[1000006];
long long int n,x;
long long int dfs1(int u1,vector<long long int>adj12[],int visi[],int x,long long int ans[]){
    long long int som=0;
    visi[u1]=1;
    for(int i=0;i<adj12[u1].size();i++){
        if(visi[adj12[u1][i]]==0){
            som+=dfs1(adj12[u1][i],adj12,visi,x,ans);
        }
    }
    return max(som+ans[u1],(long long int)(-1)*x);
}
long long int dfs(){
    long long int som=0;
    int visi[n+5]={0};
    for(int i=0;i<n;i++){
        if(!visi[i]){
            som+=dfs1(i,adj12,visi,x,ans);
        }
    }
    return som;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        //long long int n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        for(int i=0;i<n-1;i++){
            long long int a,b;
            cin>>a>>b;
            adj12[a-1].push_back(b-1);
            adj12[b-1].push_back(a-1);
        }
        cout<<dfs()<<"\n";
    }
}
