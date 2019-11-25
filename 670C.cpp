#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    intl a[n];
    map<intl,int>um;
    for(int i=0;i<n;i++){cin>>a[i];um[a[i]]++;}
    int m;
    cin>>m;
    intl mx1=0,mx2=0;int mxi=1;
    int i=0;
    intl a1[m];
    intl b1[m];
    for(int i=0;i<m;i++)cin>>a1[i];
    for(int j=0;j<m;j++)cin>>b1[j];
    i=0;
    while(m--){
        intl c=a1[i],d=b1[i];
        i++;
        if(um[c]>mx1){
            mx1=um[c];
            mx2=um[d];
            mxi=i;
        }
        else if(um[c]==mx1 && um[d]>mx2){
            mx2=um[d];
            mxi=i;
        }
    }
    cout<<mxi<<"\n";
}
