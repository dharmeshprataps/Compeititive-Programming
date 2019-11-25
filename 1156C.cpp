#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl n,z;
    cin>>n>>z;
    vector<intl>v;
    for(int i=0;i<n;i++){
        intl x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    //int a[n]={0};
    intl c=0;
    int i=0;
    while(v.size()!=0){
      //  if(a[i])
        //    continue;
        auto t=lower_bound(v.begin(),v.end(),v[i]+z);
        if(t-v.begin()!=v.size())
        {
            c++;
            v.erase(t);
            i++;
            //v.erase(find(v.begin(),v.end(),v[i]));

        }
        else{
            break;
        }
    }
    cout<<c<<"\n";

}
