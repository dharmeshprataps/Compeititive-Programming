#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int a[n];
    long int fr=0;
    long int fl=0;
    for(long int i=0;i<n;i++)cin>>a[i];
    for(long int i=n-1;i>=0;i--){
        if(a[i]==0)
            fr=max(fr,i);
        else if(a[i]==1)
            fl=max(fl,i);
    }
    cout<<min(fl,fr)+1<<"\n";

}
