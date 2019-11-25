#include<bits/stdc++.h>
using namespace std;
int c[100000+1];
int visi[100000+1];
vector<long int>v[100000+1];
vector<int>fnal;
void check(int i,int j){
    int f=1;
    if(visi[v[i][j]])
        return;
    for(int i1=0;i1<v[v[i][j]].size();i1++){
        if(c[v[v[i][j]][i1]]==0){
            f=0;
            break;
        }
    }
    if(f){
        visi[v[i][j]]=1;
        fnal.push_back(v[i][j]);
        //v.erase(v[v[i][j]]);
    }
}
int main(){
    int n;
    cin>>n;
    memset(visi,0,sizeof(visi));
    for(int i=1;i<=n;i++){
        int x;
        int d;
        cin>>x>>d;
        c[i]=d;
        v[x].push_back(i);
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<v[i].size();j++){
            if(c[v[i][j]]==0){
                continue;
            }
            if(visi[v[i][j]])
                continue;
           //cout<<v[i][j]<<" "<<i<<" "<<j<<"\n";
            check(i,j);
        }
    }
    if(fnal.size()==0){
        cout<<-1;
        return 0;
    }
    sort(fnal.begin(),fnal.end());
    for(int i=0;i<fnal.size();i++){
        cout<<fnal[i]<<" ";
    }
}
