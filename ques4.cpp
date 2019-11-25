#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    long long int su=0;
    for(int i=3;i<=n;i++){
        su=su+(i*(i-1));
    }

    cout<<su;

}
