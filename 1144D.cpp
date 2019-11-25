#include<bits/stdc++.h>
#define fi first
#define se second
#define intl long long
using namespace std;
int main(){
  //  cout<<"oo";
    int n;
    cin>>n;
    intl d[100000];
    intl a[n];
    intl mx=0;
    intl mxi=-1;
    vector<pair<intl,pair<intl,intl>>>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        d[a[i]]++;
        if(mx<d[a[i]]){
            mx=d[a[i]];
            mxi=i;
        }
    }
    for(int i=mxi;i>0;i--){
        if(a[i]>a[i-1]){
            a[i-1]+=abs(a[i]-a[i-1]);
            v.push_back({1,{i,i+1}});
        }
        else if(a[i]!=a[i-1]){
            a[i-1]-=abs(a[i]-a[i-1]);
            v.push_back({2,{i,i+1}});
        }
    }
    //cout<<mxi<<"\n";
    for(int i=mxi;i<n-1;i++){
        //cout<<i<<" "<<a[i]<<" "<<a[i+1]<<"\n";
        if(a[i]>a[i+1]){
            a[i+1]+=abs(a[i]-a[i+1]);
            v.push_back({1,{i+2,i+1}});
        }
        else if(a[i]!=a[i+1]){
            a[i+1]-=abs(a[i]-a[i+1]);
            v.push_back({2,{i+2,i+1}});
        }
    }
    cout<<v.size()<<"\n";
    for(int k=0;k<v.size();k++)cout<<v[k].fi<<" "<<v[k].se.fi<<" "<<v[k].se.se<<"\n";

}
