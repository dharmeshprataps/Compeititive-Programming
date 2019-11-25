#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m][5];
    memset(a,0,sizeof(a));
    int b[m];
    memset(b,0,sizeof(a));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            cin>>c;
            a[j][c-'A']++;
            b[j]=max(a[j][c-'A'],b[j]);
        }
    }
 //   for(int i=0;i<m;i++)cout<<b[i]<<" ";cout<<"\n";
    int c[m];
    for(int i=0;i<m;i++)cin>>c[i];
    intl sum=0;
    for(int i=0;i<m;i++)sum+=b[i]*c[i];
    cout<<sum;

}
