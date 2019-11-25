#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=2*n-2;
    string s[p];
    string s1[2];
    unordered_map<int,char>um;
    int j=0;
    for(int i=0;i<p;i++){
        cin>>s[i];
        if(s[i].length()==n-1){
            s1[j++]=s[i];
        }
    }
    string pr,su;
    string t=s1[0][0]+s1[1];
    int f2=0;
    for(int i=0;i<p;i++){
        int f=0,f1=0;
        for(int i1=0;i1<s[i].length();i1++){
            if(s[i][i1]!=t[i1]){
                f=1;
                break;
            }
        }
        int ko=t.length()-1;
        for(int i1=s[i].length()-1;i1>=0;i1--){
            if(s[i][i1]!=t[ko--]){
                f1=1;
                break;
            }
        }
        if(f && f1){
            f2=1;
            break;
        }
    }
    if(f2){
        pr=s1[1];
        su=s1[0];
    }
    else{
        su=s1[1];
        pr=s1[0];
    }
    cout<<pr[0]+su<<"\n";
    string t1="";
    for(int i=0;i<p;i++){
        if(um[s[i].length()]){
            t1+=um[s[i].length()];
            continue;
        }
        if(s[i]==pr){
            t1+='P';
        }
        else if(s[i]==su){
            t1+='S';
        }
        else{
            int f=1;
            int l=s[i].length()-1;
            int m=su.length()-1;
            for(int i1=0;i1<s[i].length();i1++){
                if(s[i][l--]!=su[m--]){
                    t1+='P';
                    f=0;
                    break;
                }
                if(s[i][i1]!=pr[i1]){
                    t1+='S';
                    f=0;
                    break;
                }
            }
            if(f)
            t1+='P';
        }
        if(t1[t1.length()-1]=='P')
        um[s[i].length()]='S';
        else
        um[s[i].length()]='P';
    }
    cout<<t1<<"\n";
}
