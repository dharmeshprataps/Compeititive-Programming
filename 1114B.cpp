#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl n,m,k;
    cin>>n>>m>>k;
    intl a[n];
    intl b[n];
    for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
    sort(b,b+n,greater<intl>());
    unordered_map<intl,int>um;
    intl su=0;
    for(int i=0;i<m*k;i++){
        um[b[i]]++;
        su+=b[i];
    }
    vector<int>v;
    int n1=0;
    for(int i=0;i<n;i++){
        if(um[a[i]]){
            um[a[i]]--;
            n1++;
           // cout<<i<<" "<<a[i]<<"\n";
            if(n1==m){
                n1=0;
                v.push_back(i+1);
            }
        }
    }
    cout<<su<<"\n";
    for(int i=0;i<v.size()-1;i++)cout<<v[i]<<" ";cout<<"\n";

}
///int a[n];
