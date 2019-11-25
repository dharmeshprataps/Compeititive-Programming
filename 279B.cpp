#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n,m;
int b_search(int i,int n1){
    int l=i;
    int h=n+1;
    int mid;
    while(l<h){
        mid=l+(h-l)/2;
        if(a[mid]==n1)
            return mid;
        if(a[mid]<n1)
            l=mid+1;
        else
            h=mid;
    }
    if(l!=h)
    return h;
    if(l==h)
        return l-1;
}
int main(){
    cin>>n>>m;
    int x=0;
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=x;
        x=a[i];
    }
    int mx=0;
    for(int i=0;i<=n;i++){
        //cout<<i<<" "<<a[i]+m<<" "<<b_search(i,a[i]+m)-i<<"\n";
        mx=max(mx,b_search(i,a[i]+m)-i);
    }
    cout<<mx<<"\n";

}
