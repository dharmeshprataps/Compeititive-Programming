#include<bits/stdc++.h>
#define intl long long
using namespace std;

int main(){
    intl n1;
    cin>>n1;
    intl n=100005;
    intl a[n+1];
    memset(a,0,sizeof(a));
    int j1=0;
    for(intl i=2;i<=n;i++){
        if(a[i]!=0)
            continue;
        j1++;
        a[i]=j1;
        for(intl j=i*i;j<=n;j+=i){
           // cout<<i<<" "<<j<<"\n";
            a[j]=j1;
        }
    }
    for(intl i=2;i<=n1;i++){
        cout<<a[i]<<" ";
    }

}
