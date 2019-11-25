#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    long long int b[n];
    for(long long int i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
    sort(a,a+n);
    long long int k=a[0];
    unordered_map<long long int,long int>um;
    unordered_multimap<long long int,long int>um2;
    for(long long int i=0;i<n;i++){
        k=max(a[i],k);
        while(um[k]){
            k++;
        }
        um2.insert({a[i],k});
        um[k]=1;

    }
//    for(auto it=um2.begin();it!=um2.end();it++){
//        cout<<it->first<<" "<<it->second<<"\n";
//    }
    for(long long int i=0;i<n;i++){
        auto it=um2.find(b[i]);
        cout<<it->second<<" ";
        um2.erase(it);
    }

}
