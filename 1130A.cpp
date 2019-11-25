#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    int p=0;
    int n1=0;
    for(int i=0;i<n;i++){cin>>a[i];if(a[i]>0)p++;else if(a[i]<0)n1++;}
    if(p>=ceil(n/double(2)))
        cout<<1<<"\n";
    else if(n1>=ceil(n/double(2)))
        cout<<-1<<"\n";
    else
        cout<<0<<"\n";

}
