#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int n;
    cin>>n;
    intl a[n];
    intl s=0;
    intl mx=0;
    for(int i=0;i<n;i++){cin>>a[i];mx=max(mx,a[i]);s+=a[i];}
    s=s-mx;
    if(mx>s){
        cout<<"NO\n";
        return 0;
    }
    if((s+mx)%2==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
