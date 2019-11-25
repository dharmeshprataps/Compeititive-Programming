#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int b[n]={0};
    int c=0;
    for(int i=0;i<n-1;i++){
        if(b[i])
            continue;
        if(a[i+1]-a[i]<=k){
            b[i+1]=1;
            b[i]=1;
            c++;
        }
    }
    cout<<c<<"\n";
}
