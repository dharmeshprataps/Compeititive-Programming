#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        intl n,k;
        cin>>n>>k;
        intl a[n];
        for(intl i=0;i<n;i++){
            cin>>a[i];
        }
        vector<intl>ans;
        intl su=0;
        for(intl i=0;i<n;i++){
            if(ans.size()==k-1){
                for(intl j=i;j<n;j++)su+=a[j];
                break;
            }
            su+=a[i];
            if(su%2){
                ans.push_back(i+1);
                su=0;
            }

        }
       // cout<<su<<"  ppp\n";
        if(!(su%2) || ans.size()!=k-1){
            cout<<"No\n";
            continue;
        }
        ans.push_back(n);
        cout<<"Yes\n";
        for(intl i=0;i<ans.size();i++)cout<<ans[i]<<" ";cout<<"\n";
    }
}
