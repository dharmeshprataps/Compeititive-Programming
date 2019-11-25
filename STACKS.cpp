#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        vector<int>ans;
        int n;
        cin>>n;
        int a[n];
        int o=0;
        for(int i=0;i<n;i++)cin>>a[i];
       // multiset<int>arr;
        ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            auto k=lower_bound(ans.begin(),ans.end(),a[i]);
            if(*k==a[i]){
                k++;
            }
            if(k==ans.end()){
                ans.push_back(a[i]);
                continue;
            }
            else{
                (*k)=a[i];
            }
        }
        cout<<ans.size()<<" ";for(auto i=ans.begin();i!=ans.end();i++)cout<<*i<<" ";cout<<"\n";
    }

}
