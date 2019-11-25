#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int mn=INT_MAX;
    for(int i=k-1;i>0;i--){
        if(n%i==0){
            int p=n/i;
            mn=min(mn,k*p+i);
        }
    }
    cout<<mn<<"\n";

}
