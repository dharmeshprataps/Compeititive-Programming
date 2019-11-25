#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int mn1=0;
        int mx1=0;
        int mn2=0;
        int mx2=0;
        int l=0;
        int r=0;
        int f=0;
        int l1=0,r1=0;
        for(int i=0;i<s.length();i++){
            if(i>1 && s[i]==s[i-1]){
                f=1;
            }
            if(s[i]=='W'){
                l++;
                l1++;
                mx1=max(mx1,l);
            }
            if(s[i]=='S'){
                l--;
                l1++;
                mn1=min(mn1,l);
            }
            if(s[i]=='D'){
                r++;
                r1++;
                mx2=max(mx2,r);
            }
            if(s[i]=='A'){
                r--;
                r1++;
                mn2=min(mn2,r);
            }
        }
        //cout<<mx1<<" "<<mn1<<" "<<mx2<<" "<<mn2<<"\n";
        int w=mx1-mn1+1;
        int h=mx2-mn2+1;
        if(f){
            if(w==0)
                h--;
            else if(h==0)
                w--;
            else if(w>h){
                h--;
            }
            else{
                w--;
            }
        }
        cout<<(max(w,h))*max(1,(min(w,h)))<<"\n";
    }


}
