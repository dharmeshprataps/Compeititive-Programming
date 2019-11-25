#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0){
        cout<<s<<"\n";
        return 0;
    }
    if(n==1 ){
        cout<<0<<"\n";
        return 0;
    }
    int j=0;
    for(int i=0;i<n && j<k;i++){
        if(i==0){
            if(s[i]!='1'){
                s[i]='1';
                j++;
            }
        }
        else if( i!=0 && s[i]!='0'){
            s[i]='0';j++;
        }
    }
    cout<<s<<"\n";
}
