#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int x=0;
    int su=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    int b[n];
    for(int i=0;i<n;i++){cin>>b[i];if(b[i]!=0)su+=a[i];}
    int mx=0;
    queue<pair<int,int>>s;
    int s1=0;
    for(int i=0;i<n;i++){
        while(!s.empty() && (i-s.front().first)>=k){
            auto p=s.front();
          //  cout<<p.first<<" "<<p.second<<" "<<i<<" "<<s1<<"\n";
            mx=max(mx,s1-s.front().second);
            s.pop();
        }
        if(b[i]==0){
            s.push({i,s1});
            s1+=a[i];
            //cout<<i<<" "<<s1<<"\n";
        }
    }
    while(!s.empty()){
        auto p=s.front();
        mx=max(mx,s1-s.front().second);
        s.pop();
    }
    cout<<su+mx<<"\n";



}
