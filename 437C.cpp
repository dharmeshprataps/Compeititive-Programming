#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m1;
    cin>>n>>m1;
    int a[n];
    for(int i=1;i<n+1;i++)cin>>a[i];
    vector<int>v[n+1];
    int s=0;
    for(int i=0;i<m1;i++){
        int a1,b1;
        cin>>a1>>b1;
        v[a1].push_back(b1);
        v[b1].push_back(a1);
        s+=min(a[a1],a[b1]);
    }

    cout<<s<<"\n";
}
