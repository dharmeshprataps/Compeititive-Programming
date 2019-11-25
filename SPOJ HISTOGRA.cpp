#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    while(true){
        intl n;
        cin>>n;
        if(!n)
            break;
        intl a[n];
        for(intl i=0;i<n;i++)cin>>a[i];
        stack<intl>s;
        intl i=0;
        intl ans=0;
        while(i<n){
            if(s.empty() || a[i]>=a[s.top()]){
                s.push(i);
                i++;
            }
            else{
                int x=s.top();
                s.pop();
                if(!s.empty())
                ans=max(ans,a[x]*(i-s.top()-1));
                else
                ans=max(ans,a[x]*i);
          //      cout<<ans<<" "<<x<<"\n";
            }
        }
        while(!s.empty()){
            intl k=s.top();
            s.pop();
            if(!s.empty())
            ans=max((n-s.top()-1)*a[k],ans);
            else
            ans=max(ans,(n)*a[k]);
        //    cout<<ans<<" p "<<k<<"\n";
        }
        cout<<ans<<"\n";

    }

}
