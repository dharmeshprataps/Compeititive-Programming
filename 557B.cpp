#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,w;
    cin>>n>>w;
    double a[(long int)(2*n)];
    for(int i=0;i<2*n;i++)cin>>a[i];
    sort(a,a+long(2*n));
    double p=a[0];
    double q=a[long(n)];
    double mn=min(p,q/2);
    double d=mn*n+2*mn*n;
    cout<<setprecision(10)<<min(d,(double)(w))<<"\n";



}
