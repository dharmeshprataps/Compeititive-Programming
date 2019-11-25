#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v;
    for(int i=0;i<n-1;i++){
        v.push_back(a[i]-a[i+1]);
    }
    int su=a[n-1]-a[0];
    sort(v.begin(),v.end());
    for(int i=0;i<k-1;i++){
        su+=v[i];
    }
    cout<<su<<"\n";
}
