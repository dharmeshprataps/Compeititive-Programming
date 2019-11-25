#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int a[n];
    for(int i=1;i<n;i++)cin>>a[i];
    long int b[n];
    b[0]=1;
    long int mn=1;
    long int mni=0;
    for(int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
        //cout<<b[i]<<" ";
        if(b[i]<mn){
            mn=b[i];
            mni=i;
        }
    }
    //cout<<mni<<"\n";
    long int c[n]={0};
    c[mni]=1;
    for(int i=mni-1;i>=0;i--){
        c[i]=c[i+1]-a[i+1];
    }
    for(int i=mni+1;i<n;i++){
        c[i]=c[i-1]+a[i];
    }
    unordered_map<long int ,int>um;
    for(int i=0;i<n;i++){
        um[c[i]]=1;
    }
    int f=1;
    for(int i=1;i<=n;i++){
        if(!um[i]){
            f=0;
            break;
        }

    }
    if(f)
    for(int i=0;i<n;i++)cout<<c[i]<<" ";
    else
    cout<<-1;


}
