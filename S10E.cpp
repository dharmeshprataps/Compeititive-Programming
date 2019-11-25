#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int a[n];
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            long int mn=a[i];
            int f=1;
            vector<int>v;
            for(int j=max(0,i-5);j<i;j++){
                v.push_back(a[j]);
            }
           // cout<<v.size()<<"\n";
            if(v.size()==0){
                ans++;continue;
            }
            sort(v.begin(),v.end());

            //cout<<v[0]<<" "<<a[i]<<"\n";
            if(v[0]>a[i]){
                ans++;
            }
        }
        cout<<ans<<"\n";

    }
}
