#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<char,int>um;
    while(n--){
        string s;
        cin>>s;
        um[s[0]]++;
    }
    int ans=0;
    for(auto i=um.begin();i!=um.end();i++){
        int p=i->second;
        int x=p/2;
       // cout<<x<<" ";
        ans+=((x)*(x-1))/2;
        int y=p-x;
        ans+=((y)*(y-1))/2;
        //cout<<i->first<< " "<<ans<<"\n";
    }
    cout<<ans<<"\n";

}
