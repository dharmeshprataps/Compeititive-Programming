#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int o=0;
        int p=(a*(a+1))/2;
        if(a==2){
            if(b==1){
                cout<<1<<"\n";
                continue;
            }
            if(b==2 || b==3){
                cout<<2<<"\n";
                continue;
            }
            cout<<-1<<"\n";
            continue;
        }
        if(a==1 && (b==1 || b==0 )){
            cout<<b<<"\n";
            continue;
        }
        //cout<<p<<"\n";
        if(b>p || b<a-1){
            cout<<-1<<"\n";
            continue;
        }
        if(b<=a+1){
            cout<<2<<"\n";
            continue;
        }
        if(b<=2*a){
            cout<<3<<"\n";
            continue;
        }
        int k=3;
        b=b-2*a;
        while(b>=(a)){
            //cout<<b<<" "<<p1<<"\n";
            b=b-a;
            k+=2;
        }
        if(b>a/2){
            k++;
        }
        if(b==0){
            k--;
        }
        cout<<min(a,k+1)<<"\n";
    }
}
