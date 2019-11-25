#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,k;
    cin>>n>>h>>k;
    int arr[n];
    for(int i=0;i<n;i++)arr[i]=h;
    for(int i=0;i<k;i++){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=a-1;i<=b-1;i++){
           arr[i]=min(arr[i],c);
        }
    }
    int s=0;
    for(int i=0;i<n;i++){
      //  cout<<arr[i]<<" ";
        s+=arr[i]*arr[i];
    }
    cout<<s<<"\n";

}
