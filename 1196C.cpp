#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int q;
        cin>>q;
        int l1=-100000,u1=100000,r1=100000,d1=-100000;
        for(int i=0;i<q;i++){
            int x,y,a,b,c,d;
            cin>>x>>y>>a>>b>>c>>d;
            if(a==0){
                l1=max(l1,x);
            }
            if(b==0){
                u1=min(u1,y);
            }
            if(c==0){
                r1=min(r1,x);
            }
            if(d==0){
                d1=max(d1,y);
            }
        }
        if(d1>u1 || l1>r1){
            cout<<0<<"\n";
            continue;
        }
        cout<<1<<" "<<r1<<" "<<u1<<"\n";
    }



}
