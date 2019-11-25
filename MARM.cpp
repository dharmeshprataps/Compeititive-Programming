#include<bits/stdc++.h>
#define int long long
#define print(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" ";
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>to(n);
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            to[i]=a[i];
        }
        int alpha=m%n;
        int roun=m/n;
        if(roun>0 && n%2==1)
            to[n/2]=0,a[n/2]=0;
        if(roun%3==2){
            for(int i1=0;i1<n/2;i1++){
                to[i1]=a[n-1-i1];
                to[n-i1-1]=a[i1]^a[n-i1-1];
            }
        }
        else if(roun%3==1){
            for(int i1=0;i1<n/2;i1++){
                to[i1]=a[i1]^a[n-i1-1];
                to[n-i1-1]=a[i1];
            }
        }
        else if(roun%3==4){
            for(int i1=0;i1<n/2;i1++){
                to[i1]=a[n-1-i1];
                to[n-i1-1]=a[i1]^a[n-i1-1];
            }
        }
        else if(roun%4==5){
            for(int i1=0;i1<n/2;i1++){
                to[i1]=a[n-1-i1];
                to[n-i1-1]=a[i1]^a[n-i1-1];
            }
        }
        for(int i=0;i<alpha;i++){
            to[i]=to[i]^to[n-i-1];
        }
        print(to,n)
        cout<<"\n";

    }
}
