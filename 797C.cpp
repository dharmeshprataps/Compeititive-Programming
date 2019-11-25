#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int b[26]={0};
    for(int i=0;i<s.length();i++)b[s[i]-'a']++;
    stack<char>s1;
    string s2="";
    for(int i=0;i<s.length();i++){
        int f=0;
        s1.push(s[i]);
        b[s[i]-'a']--;
        while(!s1.empty()){
            for(int j=0;j<s1.top()-'a';j++){
                if(b[j]){
                    f=1;
                    break;}
            }
        //    cout<<s[i]<<" "<<f<<"\n";
            if(!f){
                s2+=s1.top();
                s1.pop();
            }
            else{
                break;
            }
        }
    }
    while(!s1.empty()){
        s2+=s1.top();
        s1.pop();
    }
    cout<<s2<<"\n";
}
