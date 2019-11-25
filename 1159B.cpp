#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl n;
    cin>>n;
    intl a[n];
    intl mn=LONG_LONG_MAX;
    intl mni=-1;
    for(int i=0;i<n;i++){cin>>a[i];if(mn>a[i]){mn=a[i];mni=i;};}
    intl ans=LONG_LONG_MAX;
    for(intl i=0;i<n;i++){
        intl p=a[i]/max(i,n-1-i);
       // cout<<p<<" "<<(i)<<" "<<n-1-i<<"\n";
        ans=min(ans,p);
    }
    cout<<ans<<"\n";


}
