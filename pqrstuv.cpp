#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        int cnt=0;
        cin>>a>>b>>c;
        int o=0;
        int l=2;
        for(int i=1;i<=b;i++){
            int B=i*i;
            for(int j=2;j<=min(a,b);j++){
                int p=ceil(B/float(j-1));
                int p1=max(l,p);
                cnt+=max(o,c-p1);
                if(c>p1 && B%j && p>2){
                    cnt+=2;
                }
                cout<<B<<" "<<j<<" "<<cnt<<" 1\n";
            }
            for(int j=2;j<=min(c,b);j++){
                int p=ceil(B/float(j-1));
                int p1=max(l,p);
                cnt+=max(o,a-p1);
                if(a>p1 && B%j && p>2){
                    cnt+=2;
                }
                cout<<B<<" "<<j<<" "<<cnt<<" 2\n";
            }
        }
        cout<<cnt<<"\n";
    }

}
