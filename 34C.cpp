#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int a[s1.length()];
    int j=0;
    int f=1;
    int s=0;
    unordered_set<int>uni;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=','){
            int p=int(s1[i])-48;
            s=s*10+p;
        }
        else{
            if(uni.find(s)!=uni.end()){
                    s=0;
                continue;
            }
            uni.insert(s);
            a[j++]=s;
            s=0;
        }
        //cout<<s<<" "<<a[j-1]<<"\n";
    }
    if(s>0){
        if(uni.find(s)==uni.end())
        a[j++]=s;
    }
    vector<pair<int,int>>v;
    sort(a,a+j);
    s=-1;
    a[j]=-999;
    j++;
    vector<int>v1;
    for(int i=1;i<j;i++){
        if(a[i-1]+1==a[i]){
            if(s==-1)
            s=a[i-1];
        }
        else{
            if(s!=-1){
                v.push_back({s,a[i-1]});
                s=-1;
            }
            else{
                v1.push_back(a[i-1]);
            }
        }
    }
    int fl=0;
    if(v1.size()>0)
        fl=1;
   // for(int i=0;i<j;i++)cout<<a[i]<<" ";cout<<"\n";
//    if(v.size()>0){
//        for(int i=0;i<v.size()-1;i++){
//            cout<<v[i].first<<"-"<<v[i].second<<",";
//        }
//        if(v.size()>0)
//            cout<<v[v.size()-1].first<<"-"<<v[v.size()-1].second;
//        if(fl)
//            cout<<",";
//    }
//    if(v1.size()>0){
//        for(int i=0;i<v1.size()-1;i++){
//            cout<<v1[i]<<",";
//        }
//        if(v1.size()>0){
//            cout<<v1[v1.size()-1];
//        }
//    }
   int i=0;
    j=0;
    if(v.size()>0 && v1.size()>0){
    while(i<v.size() && j<v1.size()){
        if(v[i].second<v1[j]){
            cout<<v[i].first<<"-"<<v[i].second<<",";
            i++;
        }
        else{
            cout<<v1[j]<<",";
            j++;
        }
    }
    }
    while(v.size()>0 && i<v.size()-1){
        cout<<v[i].first<<"-"<<v[i].second<<",";
        i++;
    }
    while(v1.size()>0 && j<v1.size()-1){
        cout<<v1[j++]<<",";
    }
    if(v.size()>0 && i==v.size()-1)
        cout<<v[i].first<<"-"<<v[i].second;
    if(v1.size()>0 && j==v1.size()-1)
        cout<<v1[j];
}
