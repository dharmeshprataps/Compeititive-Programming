#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        intl n,k;
        cin>>n>>k;
        intl mn=INT_MAX,mx=0;
        for(int i=0;i<n;i++){
            intl x;
            cin>>x;
            mx=max(mx,x);
            mn=min(mn,x);
        }
        intl ap=0;
        intl p=max(ap,mx-k);
        intl q=mn+k;
        if(q<p){
            cout<<-1<<"\n";
        }
        else{
            cout<<q<<"\n";
        }
    }


}
