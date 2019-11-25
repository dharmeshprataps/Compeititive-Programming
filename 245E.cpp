#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int s1=0;
    int mn=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='-')
            s1--;
        else
            s1++;
        mn=min(mn,s1);
    }

    s1=abs(mn);
    int mx=s1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='-')
            s1--;
        else
            s1++;
        mx=max(mx,s1);
    }
    //cout<<mn<<" ";
    cout<<mx;
}
