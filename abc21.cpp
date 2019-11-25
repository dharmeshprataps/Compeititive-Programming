#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,p;
        cin>>s>>p;
        int i;
        int l=0;
        for(i=p.length()-1;i>=0;i--){
            if(p[i]=='1'){
                break;
            }
            l++;
        }
        int q=0;
        for(int i=s.length()-l-1;i>=0;i--){
            if(s[i]=='1'){
                break;
            }
            q++;
        }
        cout<<q<<"\n";
    }

}
