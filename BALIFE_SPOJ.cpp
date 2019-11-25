#include<bits/stdc++.h>
#define int long long
using namespace std;
 main(){
    int n;
    cin>>n;
    while(n!=-1){
        int a[n];
        int s=0;
        for(int i=0;i<n;i++){cin>>a[i];a[i]=s+a[i];s=a[i];}
        if(s%n!=0){
            cout<<-1<<"\n";
            cin>>n;
            continue;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,abs((s/n)*(i+1)-a[i]));
          //  cout<<(s/n)*(i+1)<<" "<<a[i]<<"\n";
        }
        cout<<ans<<"\n";
        cin>>n;
       // cout<<n<<"p\n";
        if(n==-1){
            break;
        }
    }

}
