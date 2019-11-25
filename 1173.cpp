#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100][100];
    memset(a,0,sizeof(a));
    a[0][0]=1;
    cout<<n/2+1<<"\n";
    cout<<1<<" "<<1<<"\n";
    for(int i=0;i<n/2;i++){
        cout<<1<<" "<<i+2<<"\n";;
    }
    int k=0;
    int h=n/2+2;
    for(int j=n/2;j<n-1;j++){
        cout<<(++k)+1<<" "<<n/2+1<<"\n";
    }


}
