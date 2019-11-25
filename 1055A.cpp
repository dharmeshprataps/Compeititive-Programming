#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int j=0;j<n;j++)cin>>b[j];
    if(a[0]==0){
        cout<<"NO\n";
        return 0;
    }
    if(a[s-1]){
        cout<<"YES\n";
        return 0;
    }
    if(!b[s-1]){
        cout<<"NO\n";
        return 0;
    }
    for(int i=s-1;i<n;i++){
        if(a[i]==1 && b[i]==1){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;

}

