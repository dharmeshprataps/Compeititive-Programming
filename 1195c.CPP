#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int n;
    cin>>n;
    intl a[n];
    intl b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    intl c[n][3];
    c[0][0]=a[0];
    c[0][1]=b[0];
    c[0][2]=max(a[0],b[0]);
    intl pq=0;
    for(int i=1;i<n;i++){
        if(i<2){
            c[i][1]=max(max(pq,c[i-1][0])+b[i],c[i-1][1]);
            c[i][0]=max(max(c[i-1][1],pq)+a[i],c[i-1][1]);
        }
        else{
            c[i][1]=max(max(c[i-2][2],c[i-1][0])+b[i],c[i-1][1]);
            c[i][0]=max(max(c[i-1][1],c[i-2][2])+a[i],c[i-1][1]);
        }
        c[i][2]=max(c[i][0],c[i][1]);
    }
    cout<<max(c[n-1][0],c[n-1][1])<<"\n";

}
