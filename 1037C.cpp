
#include<bits/stdc++.h>
using namespace std;
int n;
string s,p;
int func(int i){
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]==p[i])
            continue;
        if(i+1<n && s[i+1]!=p[i+1] && s[i+1]!=s[i]){
            swap(s[i+1],s[i]);
            c++;
        }
        else if(s[i]!=p[i]){
            c++;
            if(s[i]=='1')
                s[i]='0';
            else
                s[i]='1';
        }
    }
    return c;

}
int main(){
    //int n;
    cin>>n;
    cin>>s>>p;
    cout<<func(0);

}
