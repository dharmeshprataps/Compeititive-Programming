#include<bits/stdc++.h>
using namespace std;
void reduce(int a[],int i){
    long long int s1=0;
    for(int j=0;j<i;j++){
        s1=s1*10+a[j];
    }
    //cout<<s1<<" ll\n";
    s1--;
    i--;
    while(s1){
        int d=s1%10;
        s1=s1/10;
        a[i--]=d;
        //cout<<d <<" p ";
    }
    //cout<<"\n";
     //for(int i1=0;i1<3;i1++)cout<<a[i]<<" p ";cout<<"\n";
}
int main(){
    string s;
    cin>>s;
    int a[s.length()];
    long long int mx=1;
    for(int i=0;i<s.length();i++){
        a[i]=int(s[i])-48;
        mx=mx*a[i];
    }

    for(int i=s.length()-1;i>=1;i--){
        if(a[i]!=9){
            a[i]=9;
            reduce(a,i);
        }

        long long int p=1;
        for(int k=0;k<s.length();k++){
            p=p*a[k];
        }
        mx=max(p,mx);
    }

    cout<<mx<<"\n";


}
