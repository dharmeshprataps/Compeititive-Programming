#include<bits/stdc++.h>
#define mod 1000000007
#define intl long int
using namespace std;
int main(){
    intl n,l,r;
    cin>>n>>l>>r;
    intl a[n+1][3];

    intl p0=(floor(r/3.0)-ceil(l/3.0));
    intl p1=(floor((r-1)/3.0)-ceil((l-1)/3.0));
    intl p2=(floor((r-2)/3.0)-ceil((l-2)/3.0));
    a[1][0]=(p0)%mod;
    a[1][1]=(p1)%mod;
    a[1][2]=(p2)%mod;
    cout<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<"\n";
    for(int i=2;i<=n;i++){
        a[i][0]=(a[i-1][0]%mod+p0%mod+a[i-1][1]%mod+p2%mod+a[i-2][2]%mod+p1%mod)%mod;
        a[i][1]=(a[i-1][1]%mod+p0%mod+a[i-1][0]%mod+p1%mod+a[i-1][2]%mod+p2%mod)%mod;
        a[i][2]=(a[i-1][2]%mod+p0%mod+a[i-1][0]%mod+p2%mod+a[i-1][1]%mod+p1%mod)%mod;
        cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<"\n";
    }
    cout<<a[n][0]%mod<<"\n";


}
