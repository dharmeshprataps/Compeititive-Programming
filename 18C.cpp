#include<bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    ios_base::sync_with_stdio(0);
    cin:tie();
    cout:tie();
    intl n;
    cin>>n;
    intl sum=0;
    intl c=0;
    intl a[n];
    for(intl i=0;i<n;i++){cin>>a[i];sum+=a[i];}
    intl p=0;
    for(intl i=0;i<n-1;i++){
        p+=a[i];
        cout<<p<<" "<<sum-p<<"\n";
        if((sum-p)==p ){
            c++;
        }
    }
    cout<<c<<"\n";
}
