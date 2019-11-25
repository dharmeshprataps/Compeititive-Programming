#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[11];
    for(int i=1;i<=9;i++){
        cin>>a[i];
    }
    int b[n];
    int su=0;
    int f=1;
    int p=0;
    for(int i=0;i<n;i++){
        int k=int(s[i])-48;

        if(k<=a[k] && f){
            cout<<a[k];p=1;}
        else{
            cout<<k;
            if(p==1)
                f==0;
        }
    }

}
