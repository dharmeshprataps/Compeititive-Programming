#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl n,k;
    cin>>n>>k;
    intl a[n];
    for(intl i=0;i<n;i++){
        cin>>a[i];
    }
    intl i;
    for(i=0;i<n;i++){
        if(i*i+i>=2*k){
            break;
        }
    }
    if(i*i+i==2*k){
        cout<<a[i-1]<<"\n";
    }
    else{
        i--;
        intl o=k-(i*i+i)/2;
        o--;
        cout<<a[o]<<"\n";
    }

}
