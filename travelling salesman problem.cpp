#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1000][1000];
int n;
int find_weight(int start ,unordered_set<int>s){
    if(s.size()==1){
        return a[start][*(s.begin())];
    }
    unordered_set<int>p=s;
    int mn=INT_MAX;
    for(auto i=s.begin();i!=s.end();i++){
        p.erase(*i);
        mn=min(mn,a[start][*i]+find_weight(*i,p));
        p.insert(*i);
    }`
    return mn;
}
int tsp(int start){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(i);
    }
    s.erase(start);
    return find_weight(start,s);

}
main(){
    //int n;
    cin>>n;
    //int a[n][n];
    memset(a,0,sizeof a);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    //let start be 0
    cout<<tsp(0);

}
