#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl n,k,p1;
    cin>>n>>k>>p1;
    intl a[n+1];
    pair<intl,int>c[n];
    for(int i=1;i<=n;i++){cin>>a[i];c[i].first=a[i];c[i].second=i;}
    int b[n+1]={0};
    int p=1;
    sort(c+1,c+n+1);
    for(int i=1;i<n+1;i++)cout<<c[i].first<<" "<<c[i].second<<"\n";
    for(int i=1;i<n;i++){
//        if(b[i])
//            continue;
        //cout<<c[i].first+k<<" pp "<<c[i+1].first<<"\n";
        if(c[i].first+k>=c[i+1].first){
            b[c[i].second]=p;
            b[c[i+1].second]=p;
            //cout<<c[i].second<<" "<<c[i+1].second<<" "<<p<<"\n";
        }
        else{
            p++;
            b[c[i+1].second]=p;
            //cout<<c[i+1].second<<" "<<p<<"\n";
        }
    }
    for(int i=0;i<n+1;i++)cout<<b[i]<<" ";cout<<"\n";
    while(p1--){
        int a,b1;
        cin>>a>>b1;
        if(b[a]==b[b1])
            cout<<"yes\n";
        else
            cout<<"no\n";
    }

}
