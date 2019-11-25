#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int su=0;
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0 && a[i]%2!=0){
            mn=min(mn,a[i]);
        }
        if(a[i]<0 && a[i]%2!=0){
            mx=max(mx,a[i]);
        }
        if(a[i]>0)
            su+=a[i];
    }
   // cout<<mx<<" "<<mn<<"\n";
    if(su%2!=0){
        cout<<su<<"\n";
    }
    else if(su==0){
        cout<<mx<<"\n";
    }
    else{
        if(abs(mx)>mn || mx==INT_MIN){
            cout<<su-mn<<"\n";
        }
        else{
            cout<<su+mx<<"\n";
        }
    }

}
