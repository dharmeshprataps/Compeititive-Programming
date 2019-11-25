#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int j=0;j<n;j++)cin>>brr[j];
    int crr[n];
    int ans=0;
    for(int i=0;i<n;i++){
        crr[i]=arr[i]-brr[i];
        ans+=min(arr[i],brr[i]);
    }
    sort(crr,crr+n,greater<int>());
    int i=0,j=n-1;
    while(i<a && (n-1)-j<=b && i+(n-1-j)<n){
        if(abs(crr[i])<abs(crr[j])){
            ans+=abs(crr[j]);
            j--;
        }
        else{
            ans+=abs(crr[i]);
            i++;
        }
    }
    while(i<a && (i+n-1-j)<n){
        ans+=abs(crr[i++]);
    }
    while(n-1-j<=b && (i+n-1-j)<n){
        ans+=abs(crr[j--]);
    }
    cout<<ans<<"\n";
}
