#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        intl n;
        cin>>n;
        intl a[n];
        for(intl i=0;i<n;i++)cin>>a[i];
        stack<int>s;
        intl su=0;
        intl i=0;
        intl start=0;
        int f=0;
        while(i<n){
            if(s.empty() || a[i]>=a[s.top()]){
                s.push(i);
                i++;
            }
            else{
                //cout<<"p";
                intl k=s.top();
               // cout<<k<<" ";
                s.pop();
                su+=((k-start+1)*(k-start+2)/2);
                //cout<<su<<"\n";
                start=i;
                while(!s.empty())
                    s.pop();
            }
        }
        if(!s.empty()){
            intl k=s.top();
            //cout<<k<<" ";
            s.pop();
            su+=(k-start+1)*(k-start+2)/2;
            //cout<<su<<"\n";
            while(!s.empty())s.pop();
        }
        cout<<su<<"\n";
    }
}
