#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        //int a[n][n];
        set<int>s,w;
       // memset(a,0,sizeof a);
        int mx=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        w.insert(0);
        for(auto i=s.begin();i!=s.end();i++){
            for(auto j=w.begin();j!=w.end();j++){
                int p=*i^*j;
                w.insert(p);
                mx=max(mx,p^k);
            }
        }
        cout<<mx<<"\n";
    }
}
