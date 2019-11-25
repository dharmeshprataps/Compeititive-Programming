#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int a[s.length()]={0};
    for(int i=0;i<s.length();i++){
        if(s[i]=='?'){
            a[i-1]=-3;
            a[i]=-1;
        }
        if(s[i]=='*'){
            a[i-1]=-2;
            a[i]=-1;
        }
       // cout<<a[i]<<" ";
    }
    //cout<<"\n";
    int su=0;
    for(int i=0;i<s.length();i++){
        su++;
        if(a[i]==-1){
            su--;
        }
    }
    cout<<su<<"\n";

    if(su==k){
        for(int i=0;i<s.length();i++){
            if(a[i]!=-1)
            cout<<s[i];
        }
    }
    else if(su<k){
        string p="";
        int f=0;
        for(int i=0;i<s.length();i++){
            if(!a[i] || a[i]==-3 || f){
               if(a[i]!=-1)
                p+=s[i];
            }
            else if(a[i]==-2){
                int l12=su;
                for(int i1=0;i1<=k-l12;i1++){
                    p+=s[i];
                    su++;
                }
                su--;
                f=1;
            }
        }
     //   cout<<su<<"\n";
        if(su==k)
        cout<<p<<"\n";
        else{
            cout<<"Impossible\n";
        }
    }
    else{
        string p="";
        for(int i=0;i<s.length();i++){
            if(su!=k){
                if(!a[i]){
                    p+=s[i];
                }
                else if(a[i]==-2 || a[i]==-3){
                    su--;
                }
            }
            else if(su==k){
                if(a[i]!=-1){
                    p+=s[i];
                }
            }
        }
        if(su==k)
        cout<<p<<"\n";
        else cout<<"Impossible\n";
    }
}
