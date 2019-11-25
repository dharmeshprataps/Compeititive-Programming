#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p;
    cin>>s>>p;
    int n=s.length();
    unordered_map<char,int>um;
    int c=0;
    int d=0;
    int arr[p.length()]={0};
    for(int i=0;i<n;i++)um[s[i]]++;
    for(int i=0;i<p.length();i++){
        if(um[p[i]]){
            arr[i]=1;
            c++;
            um[p[i]]--;
        }
    }
    for(int i=0;i<p.length();i++){
        if(arr[i])
            continue;
        int k=int(p[i]);
        if(k>96)
            k-=32;
        else
            k+=32;
        if(um[char(k)]){
            cout<<i<<"\n";
            d++;
            um[char(k)]--;
        }
    }
    cout<<c<<" "<<d<<"\n";

}
