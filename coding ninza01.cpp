#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,1});
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,2});
    }
    int mx=0;
    int c=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
        if(v[i].second==1){
            c++;
        }
        else{
            c--;
        }
        mx=max(mx,c);
    }
    cout<<mx<<"\n";
}
