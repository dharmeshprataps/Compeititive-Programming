#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl w,h;
    cin>>w>>h;
    int u1,v1,u2,v2;
    cin>>u1>>v1>>u2>>v2;
    intl p=0;
    intl ans=((h)*(h+1))/2;
    for(intl i=h;i>=1;i--){
        w=w+i;
        if(i==v1){
            w=max(p,w-u1);
        }
        if(i==v2){
            w=max(p,w-u2);
        }
    }
    cout<<w<<"\n";

}
