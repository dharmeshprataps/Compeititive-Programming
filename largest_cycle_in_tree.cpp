#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v[n+1];
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    int m[v[a].size()];
    int mx[v[a].size()];
    memset(m,1,sizeof(m));
    queue<long int>s;
    for(int i1=0;i1<v[1].size();i1++){
        while(!s.empty()){
            long int k=s.top();
            s.pop();
            m[i1]++;
            for(int i=0;i<v[k].size();i++){
                s.push(v[k][i]);
            }
        }

    }

}
