#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    unordered_map<long long int,long long int>um;
    long long int mx=0;
    long long int mn=INT_MAX;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        um[x]++;
        mx=max(mx,x);
        mn=min(mn,x);
    }
    //cout<<mx<<" "<<mn<<"\n";
    long long int x1=um[mx]*um[mn];
    long long int x2=n*(n-1)/2;
    if(mx!=mn)
    cout<<mx-mn<<" "<<x1<<"\n";
    else
        cout<<mx-mn<<" "<<x2<<"\n";
}
