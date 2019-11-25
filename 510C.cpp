#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    unordered_map<char,int>um;
    vector<char>v;
    for(int i=0;i<n;i++)cin>>s[i];
    int i=0;
    while(i<n-1){
        if(s[i][0]==s[i+1][0]){
            i++;
            continue;
        }
        if(um[s[i][0]]){
            cout<<"Impossible\n";
            return 0;
        }
        um[s[i][0]]=1;
        v.push_back(s[i][0]);
        i++;
    }
    if(um[s[n-1][0]]){
        cout<<"Impossible\n";
        return 0;
    }
    um[s[n-1][0]]=1;
    v.push_back(s[n-1][0]);
    for(int i=0;i<v.size();i++)cout<<v[i];
    for(char i1='a';i1<='z';i1++){
        if(!um[i1])
            cout<<i1;
    }

}
