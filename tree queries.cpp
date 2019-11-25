#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    long long int a[n];
    long long int h=ceil(log2(n));
    long long int b1[h+1]={0};
    for(long long int i=0;i<n;i++){
        cin>>a[i];
        long long int u=(log2(i+1));
        //cout<<u<<"\n";
        b1[u]=b1[u]+a[i];

    }
//    for(int i=0;i<h;i++){
//        cout<<b[i]<<" ";
//    }
//    cout<<endl;
    while(m--){
        long long int type;
        cin>>type;
        if (type==1 || type==2){
            long long int b,c;
            cin>>c>>b;
            if (type==1){
                c--;
                b--;
                long long int d=pow(2,b)-1+c;
                cout<<a[d]<<endl;
            }
            else{
                c--;
                b--;
                long long int s=0;
                for(int i=c;i<=b;i++){
                    s+=b1[i];
                }
                cout<<s<<"\n";
            }
        }
        else{
            long long int e,b,c;
            cin>>e>>b>>c;
            e--;
            b--;
            long long int d=pow(2,b)-1+e;
            b1[b]=b1[b]-a[d];
            b1[b]=b1[b]+c;
            a[d]=c;
        }
    }

}
