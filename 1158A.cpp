#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    intl b[n],g[m];
    intl su=0;
    intl mx=0;
    intl s1=0;
    intl s2=0;
    intl mx1=LONG_LONG_MAX;
    for(int i=0;i<n;i++){cin>>b[i];s1+=b[i];mx=max(mx,b[i]);}
    for(int j=0;j<m;j++){cin>>g[j];s2+=g[j];mx1=min(mx1,g[j]);}
    int k=0;
    int f=0;
    su+=s2;
    su+=b[0];
    //cout<<su<<"\n";
    su+=b[1]*(m-1);
    for(int i=2;i<n;i++){
      //  cout<<su<<"\n";
        su+=b[i]*m;
    }
    if(mx1<mx)
        cout<<-1<<"\n";
    else
        cout<<su<<"\n";


}
