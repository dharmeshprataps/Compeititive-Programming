#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v[n+1];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    map<int,int>um;
    for(int i=1;i<=n;i++){
        um[v[i].size()]++;
    }
    //for(auto i=um.begin();i!=um.end();i++)cout<<i->first<<" "<<i->second<<"\n";
    for(auto i=um.rbegin();i!=um.rend();i++){
        if(i->first==2){
            if(i->second==n){
                cout<<"ring topology\n";
                return 0;
            }
            if(i->second==n-2){
                if(um[1]==2){
                    cout<<"bus topology\n";
                    return 0;
                }
            }
        }
        if(i->first==n-1){
            if(um[1]==n-1){
                cout<<"star topology\n";
                return 0;
            }
        }
    }
    cout<<"unknown topology";

}
