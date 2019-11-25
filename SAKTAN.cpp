#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        int r[n+1]={0};
        int c[m+1]={0};
        while(q--){
            int x,y;
            cin>>x>>y;
            c[y]++;
            r[x]++;
        }
        int c1=0,r1=0;
        for(int i=1;i<=m;i++){
            if(c[i]%2!=0)
                c1++;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(r[i]%2==0){
                ans+=(c1);
            }
            else{
                ans+=(m-c1);
            }
        }
        cout<<ans<<"\n";
    }
}
