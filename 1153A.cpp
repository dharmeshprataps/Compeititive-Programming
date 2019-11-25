#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,t;
    cin>>n>>t;
    int mn=INT_MAX;
    int mni=0;
    int i=0;
    while(i++<n){
        long long int a,b;
        cin>>a>>b;
        if(a>t){
            long long int t1=t-a;
            long long int p=ceil(t1/float(b));
            a=p*b+a-t;
        }
        if(mn>a){
            mn=a;
            mni=i;
        }
    }
    cout<<mni<<"\n";
}
