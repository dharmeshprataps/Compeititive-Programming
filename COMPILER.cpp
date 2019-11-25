#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char>st;
        int f=1;
        int a=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='<')
                a++;
            else
                a--;
            if(a==0)
                ans=max(ans,i+1);
            if(a<0)
                break;
        }
        cout<<ans<<"\n";
    }

}
