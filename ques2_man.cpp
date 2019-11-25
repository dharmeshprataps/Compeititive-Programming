#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    unordered_map<int,int>um;
    unordered_set<int>us;
    int l=-1,r=-1;
    int f=1;
    for(int i=0;i<n;i++){
        //cout<<f<<" "<<um[a[i]]<<"\n";
        if(um[a[i]]){
            us.insert(a[i]);
         //   cout<<a[i]<<"\n";
        }
        um[a[i]]++;

    }
    int mn=99999999999;
    if(us.empty()==1){
        cout<<0<<"\n";return 0;
    }
   // cout<<us.size()<<"\n";
   unordered_set<int>us2;
    unordered_map<int,int>um2;
     mn=9999999999;
    for(int i=0;i<n;i++){
        um2=um;
        us2=us;
        for(int j=i;j<n;j++){
            um2[a[j]]--;
          //  cout<<a[i]<<" "<<um2[a[i]]<<"\n";
            if(um2[a[j]]==1){
                us2.erase(a[j]);
            }
          // cout<<i<<" "<<j<<" "<<us2.size()<<"\n";
            if(us2.empty()){
                mn=min(mn,abs(j-i)+1);
            }
        }
    }
    cout<<mn<<"\n";
    return 0;
    vector<int>v;
//    for(int i=0;i<l;i++){
//        v.push_back(a[i]);
//    }
//    for(int i=r;i<n;i++)
//        v.push_back(a[r]);
//

    cout<<mn<<"\n";
}
