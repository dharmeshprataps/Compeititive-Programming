#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl n,k;
    cin>>n>>k;
    cout<<static_cast<long long>(round(n + 1.5 - sqrt(2 * (n + k) + 2.75)));


}
