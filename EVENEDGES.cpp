#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        unordered_multiset<int>s[n+1];
        int a,b;
        for(int i=0;i<m;i++){
            //int a,b;
            cin>>a>>b;
            s[a].insert(b);
            s[b].insert(a);
        }
        if(m%2==0){
            cout<<1<<"\n";
            for(int i=0;i<n;i++)cout<<1<<" ";cout<<"\n";
            continue;
        }
        int i;
        int f=0;
        for(i=1;i<=n;i++){
            if(s[i].size()%2!=0){
                f=1;
                break;
            }
        }
        if(f){
            cout<<2<<"\n";
            for(int i1=1;i1<=n;i1++){
                if(i1==i){
                    cout<<2<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
            cout<<"\n";
            continue;
        }
        cout<<3<<"\n";
        for(int i1=1;i1<=n;i1++){
            if(i1==a){
                cout<<2<<" ";
            }
            else if(i1==b){
                cout<<3<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<"\n";
    }
}
