#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){

        int a,b,n;
        cin>>a>>b>>n;
        if(n%3==0){
            cout<<a<<"\n";
        }
        else if(n%3==1){
            cout<<b<<"\n";
        }
        else {
            cout<<(a^b)<<"\n";
        }
    }
}
