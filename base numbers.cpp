#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    int a,n,b;
    while(cin>>a>>n>>b){
        int l=0;
        int h=LLONG_MAX;
        while(l<h){
            cout<<l<<" "<<h
            int mid=l+(h-l)/2;
            int al=b*pow(mid,mid);
            int p=al/round(pow(b,n-1));
            if(p>=b){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        cout<<l<<"\n";
    }
}
