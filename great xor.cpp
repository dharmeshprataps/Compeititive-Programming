#include <bits/stdc++.h>

using namespace std;
string func(long long n){
    string s="";
    while(n!=1){
        if(n%2!=0){
            s+="1";
        }
        else{
            s+="0";
        }
        n=n/2;
    }
    s+="1";
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<func(n)<<"\n";
    }



}
