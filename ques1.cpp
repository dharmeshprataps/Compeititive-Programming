#include<bits/stdc++.h>
# define intl long long
using namespace std;
int main(){
    string s;
    cin>>s;
    intl c=0;
    for(int i=0;i<s.length();i++){
        c+=(s[i]-'0');
    }
    if(c%4==0){
        cout<<s<<"\n";
    }
    else{
        int p=0;
        for(int i=0;i<s.length();i++){
            p=p*10+int(s[i]-'0');
        }
        p++;
        int c=-1;
        while(c%4!=0){
            c=0;
            p++;
            //cout<<p<<"\n";
            intl p1=p;
            while(p){
                c+=p%10;
                p=p/10;
            }
            p=p1;
        }
        cout<<p<<"\n";
    }
}
