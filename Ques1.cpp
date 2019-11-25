#include<bits/stdc++.h>
#define intl long long
#define fi first
#define se second
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<intl> v;
        for(intl i=0;i<n;i++){
            intl x;
            cin>>x;
            v.push_back(x);
        }
        intl su=0;
        while(v.size()!=1){
            intl mn=v[0]+v[v.size()-1];
            intl mni=v.size()-1;
            for(intl i=0;i<v.size()-1;i++){
                if(mn>=v[i]+v[i+1]){
                    mn=v[i]+v[i+1];
                    mni=i;
                }
            }
            su+=mn;
            if(mni!=v.size()-1){
                v.erase(v.begin()+mni);
                v.erase(v.begin()+mni);
                v.insert(v.begin()+mni,mn);
            }
            else{
                v.erase(v.begin());
                v.erase(v.begin()+mni-1);
                v.insert(v.begin(),mn);
            }
            //for(intl i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
        }
        cout<<su-(su%2)<<"\n";
    }
}
