#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[n];
    int x=0;
    for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i]+x;x=b[i];}
    int p[109]={0};
    for(int i=0;i<n;i++){
        if(b[i]<=m){
            cout<<0<<" ";
        }
        else{
            int z=0;
            for(int i1=100;i1>=0;i1--){
                if(p[i1]){
                    if(p[i1]*i1<(b[i]-m)){
                        b[i]-=(p[i1]*i1);
                        z+=p[i1];
                    }
                    else{
                        int x=ceil((b[i]-m)/float(i1));
                        cout<<z+x<<" " ;
                        break;
                    }
                   // cout<<b[i]<<" "<<a[i]<<"\n";
                }
            }

        }
        p[a[i]]++;
    }






}
