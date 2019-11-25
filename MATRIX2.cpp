#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){cin>>a[i][j];if(a[i][j])s+=1;}
    }
    int l=0,r=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!a[i][j]){
                p=i-l;
                q=j-r;
                r=min(p,q);
                s+=(r*(r+1))/2;
                l=i;
                r=j;
            }
        }
    }
    cout<<s<<"\n";

}
