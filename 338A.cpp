#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,greater<int>());
    int mn=INT_MAX;
    int fla=0;
    for(int i=0;i<n;i++){
        mn=min(mn,a[i]+i-fla);
        cout<<mn<<" "<<fla<<" "<<a[i]<<"\n";
        if(mn<=i-fla){
            c++;
            fla=i+1;
            mn=INT_MAX;
        }
    }
    if(mn!=INT_MAX)
        c++;
    cout<<c<<"\n";
}
