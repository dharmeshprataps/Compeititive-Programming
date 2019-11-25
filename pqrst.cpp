#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
main(){
    int k,n;
    cin>>n>>k;
    map<int,int>m;
    for(int i=0;i<n;i++){int x;cin>>x;m[x]++;}
    int p[n+1]={0};
    p[0]=1;
    int l =1;
    int x=0;
    for(auto i=m.begin();i!=m.end();i++){
        for(int j=l;j>0;j--){
            p[j]=(p[j]%mod+((p[j-1]%mod)*(i->second%mod))%mod)%mod;
        }
        l++;
    }
    int s=0;
    for(int i=0;i<=k;i++){s=(s%mod+p[i]%mod)%mod;}
    cout<<s<<"\n";
}
