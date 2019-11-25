#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>s1;
    for(int i=0;i<s.length();i++){
        if(s1.empty() || s1.top()!=s[i]){
            s1.push(s[i]);
            continue;
        }
        while(s1.top()==s[i]){
            s1.pop();
            if(s1.empty())break;
        }
    }
    if(!s1.size()){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

}
