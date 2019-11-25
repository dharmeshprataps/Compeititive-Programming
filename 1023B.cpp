#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,k;
    cin>>n>>k;
    if(k>(2*n-1)){
        cout<<0;
        return 0;
    }
    if(k<n){
    cout<<(k-1)/2;
    return 0;
    }
    cout<<(n-k/2);


}
