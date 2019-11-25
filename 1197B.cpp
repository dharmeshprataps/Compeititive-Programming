#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int i;
    int f=0;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1])
        {f=1;
            break;}
    }
    if(f==0){
        cout<<"YEs\n";return 0;}
    f=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
        {f=1;
            break;}
    }
    if(f==0){
        cout<<"YEs\n";return 0;}
    if(a[0]<a[1]){
        for(i=0;i<n-1;i++){
            if(a[i]>=a[i+1])
                break;
        }
        for(int j=i+1;j<n-1;j++){
            if(a[j]<=a[j+1]){
                cout<<"no\n";
                return 0;
            }
        }
        cout<<"Yes\n";
        return 0;
    }
    cout<<"No\n";
}
