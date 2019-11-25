#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+2][m+2];
    memset(a,8001,sizeof(a));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    if(a[n-1][m-1]==0)a[n-1][m-1]=8000;
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(a[i][j]==0){
                a[i][j]=max(a[i-1][j],a[i][j-1])+1;
                if(a[i][j+1]>a[i][j] && a[i+1][j]>a[i][j]){
                    a[i][j]=min(a[i][j+1]-1,(a[i+1][j]-1));
                }
                else{
                    cout<<"-1\n";
                    return 0;
                }
            }
            else{
                if(a[i][j+1]<=a[i][j] || a[i+1][j]<=a[i][j]){
                    cout<<"-1\n";
                    return 0;
                }
            }
        }
    }
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)s+=a[i][j];
    }
    cout<<s<<"\n";

}
