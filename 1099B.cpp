#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl n;
    cin>>n;
    intl p=sqrt(n);
    intl x=ceil((n-(p*p))/float(p));
    cout<<x+2*p<<"\n";

}
