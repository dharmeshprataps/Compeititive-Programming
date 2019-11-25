#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>s1;
    int a[s.length()+100]={0};
    int c=0;
    int mx=0;
    int mxi=0;
    for(int i=0;i<s.length();){
        if(s1.empty()|| (s1.top()==s[i] && s[i]=='(')){
            s1.push(s[i++]);
            continue;
        }
        if(s1.top()=='(' && s[i]==')'){
            s1.pop();
            c+=2;
            i++;
            cout<<i<<"\n";
            continue;
        }
        if(s1.top()==')'){
            cout<<i<<" "<<c<<"\n";
            if(c!=0){
                a[c]++;
                if(mx<a[c]){
                    mx=a[c];
                    mxi=c;
                }
            }
            c=0;
            s1.pop();
        }
    }
    //if(s1.empty()){
    cout<<c<<"\n";
    if(c!=0){
        a[c]++;
        if(mx<a[c]){
            mx=a[c];
            mxi=c;
        }
    }

    if(mxi)
    cout<<mxi<<" "<<mx<<"\n";
    else
        cout<<"0 1\n";
}
