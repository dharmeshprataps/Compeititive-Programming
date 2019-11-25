#include<bits/stdc++.h>
#define int long long
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){
    if(p1.first>p2.first)
        return true;
    if(p1.first==p2.first && p1.second<p2.second){
        return true;
    }
    return false;
}
int b_search(vector<int>v,int i,int l,int h){
    while(h-l>1){
        int mid=l+(h-l)/2;
        if(v[mid]>=i){
            h=mid;
        }
        else if(v[mid]<i){
            l=mid;
        }
    }
    return h;

}
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end(),compare);
        vector<int>t;
        vector<int>s;
        //t.push_back(v[0]);
        for(int i=0;i<v.size();i++){
//            if(v[i].first==v[i+1].first){
//                s.insert(v[i].second);
//                continue;
//            }
            auto i1=upper_bound(s.begin(),s.end(),v[i].second);
            if(i1==s.end()){
                s.push_back(v[i].second);
                continue;
            }
            s[i1-s.begin()]=v[i].second;
        }
        //for(auto i=s.begin();i!=s.end();i++)cout<<*i<<" ";cout<<"\n";
        cout<<s.size()<<"\n";
    }

}
