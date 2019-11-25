#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=2*n;
    long int a[n];
    long int b[n];
    long int x=0;
    b[0]=0;
    int f=0;
    for(int i=0;i<n;i++){cin>>a[i];if(a[i]!=a[i-1] && i!=0)f=1;}
    if(!f){
        cout<<-1<<"\n";
        return 0;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
