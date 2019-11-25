#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n<11){
            cout<<"NO\n";
            continue;
        }
        int f=1;
        for(int i=n-11;i>=0;i--){
            if(s[i]=='8'){
                cout<<"YES\n";
                f=0;
                break;
            }
        }
        if(f)
            cout<<"NO\n";
    }

}
