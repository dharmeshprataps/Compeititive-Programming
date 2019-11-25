#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<char,int>>v1;
    vector<pair<char,int>>v2;
    vector<int>q1;
    vector<int>q2;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        if(x=='?')
            q1.push_back(i+1);
        else
        v1.push_back({x,i+1});
    }
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        if(x=='?')
            q2.push_back(i+1);
        else
        v2.push_back({x,i+1});
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    vector<int>j1;
    vector<int>j2;
    vector<pair<int,int>>vf;
    int i=0;int j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i].first==v2[j].first){
            vf.push_back({v1[i].second,v2[j].second});
            i++;
            j++;
        }
        else if(v1[i].first>v2[j].first){
            j2.push_back(v2[j].second);
            j++;
        }
        else{
            j1.push_back(v1[i].second);
            i++;
        }
    }
    while(i<v1.size()){
        j1.push_back(v1[i++].second);
    }
    while(j<v2.size()){
        j2.push_back(v2[j++].second);
    }
    //cout<<j1.size()<<" "<<j2.size()<<"\n";
    int i1,i2;
    for(i1=0;i1<min(q1.size(),j2.size());i1++){
        vf.push_back({q1[i1],j2[i1]});
    }
    for(i2=0;i2<min(q2.size(),j1.size());i2++){
        vf.push_back({j1[i2],q2[i2]});
    }
    while(i1<q1.size() && i2<q2.size()){
        vf.push_back({q1[i1++],q2[i2++]});
    }
    cout<<vf.size()<<"\n";
    for(int i=0;i<vf.size();i++)
        cout<<vf[i].first<<" "<<vf[i].second<<"\n";

}
