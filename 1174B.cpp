#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int arr[n];
    int o=0,e=0;
    for(int i=0;i<n;i++){cin>>arr[i];if(arr[i]%2==0)e=1;else o=1;}
    if(o && e){
        sort(arr,arr+n);
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    }
    else{
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    }


}
