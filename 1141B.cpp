#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    long int b[n]={0};
    for(int i=0;i<n;i++)cin>>a[i];
    if(a[0])b[0]=1;
    long int mx=0;
    for(int i=1;i<n;i++){
        if(a[i])
            b[i]=b[i-1]+1;
        mx=max(mx,b[i]);
    }
    long int s=b[n-1];
    for(int i=0;i<n;i++){
        if(!a[i])
            break;
        s++;
    }
    mx=max(mx,s);
    cout<<mx;

}
