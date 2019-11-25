#include<bits/stdc++.h>
using namespace std;
# define intl long long
intl gcd(intl a,intl b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
intl func(unordered_set<intl>s,intl res1,intl res2){
    intl mn=res1;
    intl mx=res2;
    for(auto i=s.begin();i!=s.end();i++){
        if(*i==mx || *i==mn)
            continue;
        intl x1=gcd(res1,*i);
        intl x2=gcd(res2,*i);
        if((res1-x1)<(res2-x2)){
            res1=x1;
        }
        else{
            res2=x2;
        }
    }
    return res1+res2;
}
intl func1(unordered_set<intl>s,intl res1){
    int ans=0;
    for(auto i=s.begin();i!=s.end();i++){
        if(*i!=res1){
            if(i==s.begin()){
                ans=*i;
            }
            else{
                ans=gcd(ans,*i);
            }
        }
    }
    return ans+res1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        intl n;
        cin>>n;
        unordered_set<intl>s;
        intl mn1=9999999999;
        intl mx1=0;
        intl mx2=0;
        for(int i=0;i<n;i++){
            intl x;
            cin>>x;
            s.insert(x);
            mn1=min(mn1,x);
            if(x>mx1){
                mx2=mx1;
                mx1=x;
            }
            if(x<mx1 && x>mx2){
                mx2=x;
            }
        }
        //for(auto )
        auto i=mn1;
        auto j=mx1;
        intl res1=i;
        intl res2=j;
        intl ans1=func1(s,mx2);
        ans1=max(ans1,func1(s,mx1));
        ans1=max(ans1,func(s,mn1,j));
        cout<<ans1<<"\n";
    }


}
