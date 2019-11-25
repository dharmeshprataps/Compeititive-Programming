
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    string x,y;
    cin>>x>>y;
   // cout<<int('0')<<"\n";
    for(int i=0;i<n;i++){
        a[i]=int(x[i])-48;
        b[i]=int(y[i])-48;
    }
    int mn=0;
    sort(b,b+n);
    sort(a,a+n);
    unordered_map<long int,int>um;
    unordered_map<long int,int>um1;
    for(int i=0;i<n;i++){
        int k=lower_bound(a,a+n,b[i])-a;
        //cout<<k<<" "<<a[k]<<" "<<b[i]<<"\n";
        if(k==n){
            //mn++;
            continue;
        }
        if(a[k]>b[i])
            k--;
        while(a[k]==a[k+1])
            k++;
        while(um[k] && k>=0){
            k--;
        }
        um[k]=1;
        if(k<0 ){
            mn++;
        }
    }
    int mx=0;
    for(int i=0;i<n;i++){
        int k=upper_bound(b,b+n,a[i])-b;
        if(k==n){
            continue;
        }
        if(b[k]==a[i])
            k++;
        while(um1[k] && k<n)
            k++;
        um1[k]=1;
        if(k<n)
            mx++;
    }
    cout<<mn<<"\n"<<mx<<"\n";
}
