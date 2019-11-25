#include<bits/stdc++.h>
#define intl long long

using namespace std;
int main(){
    intl n,k;
    cin>>n>>k;
    intl a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    intl s=0;
    intl j=1;
    int k1=k;
    for(int i=n/2;i<n-1;i++){
        k1=k1-j*(a[i+1]-a[i]);
        if(k1==0){
            cout<<a[i+1]<<"\n";
            return 0;
        }
        if(k1<0){
            cout<<a[i]+k/j<<"\n";
            return 0;
        }
        j++;
        k=k1;
    }
 //   cout<<k<<"\n";
    if(k>0){
        cout<<a[n-1]+k/(n/2+1)<<"\n";
    }
}
