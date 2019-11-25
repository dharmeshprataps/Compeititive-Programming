#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int n,m,k,q;
    cin>>n>>m>>k>>q;
    vector<vector<int>>a;
    for(int i=0;i<k;i++){
        vector<int>a1;
        int x,y;
        cin>>x>>y;
        a1.push_back(x);a1.push_back(y);
        a.push_back(a1);
    }
    sort(a.begin(),a.end());
    int s[q];
    for(int i=0;i<q;i++)cin>>s[i];
    sort(s,s+q);
    int p=1;int l=0;
    int ans=0;
    int curr=1;
    while(p<=n){

        if(a[l][0]==p){
            ans+=abs(a[l][1]-curr);
            curr=a[l][1];
            l++;
        }
        if(p>=a[k-1][0]){
            break;
        }
        int al=lower_bound(s,s+q,curr)-s;
        if(s[al]==curr){
            al--;
        }
        int bl=upper_bound(s,s+q,curr)-s;
        if(s[bl]==curr){
            bl++;
        }
        if(al<0){
            ans+=abs(bl-curr);curr=bl;
        }
        else if(bl>=n){
            ans+=abs(curr-al);curr=al;
        }
        else if(abs(curr-al)<abs(curr-bl)){
            ans+=abs(curr-al);
            curr=al;
        }
        else{
            ans+=abs(bl-curr);
            curr=bl;
        }
        ans++;
        p++;cout<<p<<" "<<curr<<" "<<ans<<"\n";
    }
    cout<<ans<<"\n";
}
