#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        intl n;
        cin>>n;
        map<intl,intl>mp;
        //memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]++;
        }
        multimap<intl,intl>mp1;
        for(auto i=mp.begin();i!=mp.end();i++){
            mp1.insert({i->second,i->first});
        }
        int p=0;
        int q=-1;
        for(auto i=mp1.rbegin();i!=mp1.rend();i++){
           // cout<<q<<" "<<i->first<<" "<<i->second<<"\n";
            if(q==-1){
                q=i->first;
                p+=q;
            }
            else{
                if(i->first>=q){
                    q--;
                    p+=q;
                }
                else{

                    q=i->first;p+=q;
                }
            }
            if(q==0){
                break;
            }
        }
        cout<<p<<"\n";
    }

}
