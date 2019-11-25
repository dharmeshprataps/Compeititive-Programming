
#include<bits/stdc++.h>
#define int long long
using namespace std;
bool possible(int l,multiset<int>s,int k,int c){
    if(l==0){
        return 1;
    }
    vector<int>v[l];
    int nw=0;
    int a[l]={0};
    for(auto i=s.begin();i!=s.end();i++){
        if(v[nw].size()==k){
            return 1;
        }
        if(v[nw].empty() || v[nw][a[nw]-1]*c<=*i){
            v[nw].push_back(*i);
            a[nw]++;
            nw++;
            nw%=l;

        }
    }
    if(v[nw].size()==k){
        return 1;
    }
    return 0;
}
main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,c;
        cin>>n>>k>>c;
        multiset<int>s;
        for(int i=0;i<n;i++){
            int x1;
            cin>>x1;
            s.insert(x1);
        }
        int h=n/k+1;
        int l=0;
        while(1<h-l){
            int mid=l+(h-l)/2;
            if(possible(mid,s,k,c)){
                l=mid;
            }
            else{
                h=mid;
            }
        }
        if(possible(l,s,k,c))
        cout<<l<<"\n";
        else{
            cout<<l+1<<"\n";
        }
    }
}
