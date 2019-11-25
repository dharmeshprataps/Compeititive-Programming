#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    int a[n][n];
    int p=0;
    for(int k=1;k<=n/4;k++){
        for(int i=0;i<n;i++){
            for(int j=(k-1)*4;j<k*4;j++){
                a[j][i]=p++;
                //cout<<j<<" "<<i<<" "<<k<<"\n";
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }

}
