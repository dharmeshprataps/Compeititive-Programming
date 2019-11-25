#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int a[n]={0};
    long long int s=0;
    for(int i=0;i<n;i++){cin>>a[i];s+=a[i];}
    long int m;
    cin>>m;
    long int q[m]={0};
    for(int i=0;i<m;i++)cin>>q[i];
    sort(a,a+n);

    for(int i=0;i<m;i++){
        cout<<s-a[n-q[i]]<<"\n";
    }



}
