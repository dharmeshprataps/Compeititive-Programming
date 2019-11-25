#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t){
        t--;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int al=0;
        for(int i=0;i<n;i++){
            if(s[i]=='>'){
                break;
            }
            al++;
        }
        int pl=0;
        for(int j=n-1;j>=0;j--){
            if(s[j]=='<'){
                break;
            }
            pl++;
        }
        int ans=min(al,pl);
        cout<<min(n-1,ans)<<"\n";
   }
}
