#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    map<int,int>m;
    vector<int>v1;
    vector<int>v2;
    int f=0;
    for(int i=0;i<n;i++){cin>>a[i];m[a[i]]++;if(m[a[i]]>2)f=1;}
    if(f){
        cout<<"NO\n";
        return 0;
    }
    for(auto i=m.begin();i!=m.end();i++){
        v1.push_back(i->fi);
        i->se--;
    }
    for(auto i=m.rbegin();i!=m.rend();i++){
        if(!i->se)
            continue;
        v2.push_back(i->fi);
        i->se--;
    }
    cout<<"YES\n";
    cout<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
    cout<<"\n"<<v2.size()<<"\n";
    for(int i=0;i<v2.size();i++)cout<<v2[i]<<" ";
    cout<<"\n";
}
