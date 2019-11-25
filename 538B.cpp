#include<bits/stdc++.h>
using namespace std;
int largest_quasi_binary(int n){
    string s="";
    while(n){
        int p=n%10;
        n=n/10;
        if(p>=1)
        s='1'+s;
        else
        s='0'+s;
    }
    //cout<<s<<" p \n";
    int h=0;
    for(int i=0;i<s.length();i++)
        h=h*10+(int(s[i])-int('0'));
    return h;

}
int main(){
    int n;
    cin>>n;
    int k=0;
    vector<int>v;
    while(n){
        k++;
        int l=largest_quasi_binary(n);
        v.push_back(l);
        n=n-l;
    }
    cout<<k<<"\n";
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";


}
