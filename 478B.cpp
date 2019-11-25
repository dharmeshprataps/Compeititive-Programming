#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;

    long long int k1=n/m;
    long long int p1=n%m;
    cout<<(m-p1)*k1*(k1-1)/2+p1*(k1+1)*k1/2<<" ";
    cout<<(n+1-m)*(n-m)/2;
}
