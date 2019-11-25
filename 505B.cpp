#include<bits/stdc++.h>
using namespace std;
vector<int>v[110][110];
int n;
int dfs(int i,int visi[],int n1,int n2){
  //  cout<<i<<" "<<n1<<" "<<n2<<"\n";
    if(n1==n2)
        return 1;
    if(visi[n1])
        return 0;
    visi[n1]=1;
    int s=0;
    for(int j=0;j<v[i][n1].size();j++){
         s=s||dfs(i,visi,v[i][n1][j],n2);
    }
    return s;
}
int main(){
    int n,m;
    cin>>n>>m;
    //vector<int>v[m+1][n+1];
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v[c][a].push_back(b);
        v[c][b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--){
        int b,c;
        cin>>b>>c;
        int s=0;

        for(int i=1;i<m+1;i++){
            int visi[n+1]={0};
            s+=dfs( i,visi,b,c);
    //        cout<<"pppppppppppp\n";
        }
        cout<<s<<"\n";
    }
}
