#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[105]={0};
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]++;
        }
        int p=0;
        int p1=0;
        int k1=k;
        for(int i=1;i<101;i++){
            if(a[i]>0){
                if(k>a[i])
                    k-=a[i];
                else{
                    p1=a[i]-k;
                    k=0;
                    p=a[i];
                }
            }
            if(k==0){
                break;
            }
        }
       // cout<<p<<"\n";
        int s=1;
        for(int i=0;i<p1;i++){
            s=s*p;
            p--;
        }
        for(int i=1;i<=p1;i++){
            s=s/i;
        }
        cout<<s<<"\n";
    }
}
