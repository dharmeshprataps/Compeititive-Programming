#include<bits/stdc++.h>
using namespace std;
int a[8][8];
int n,k;
int func(int q,int j,int p ,int r){
    for(int i=0;i<n;i++){
        swap(a[i][q],a[i][j]);
        swap(a[i][p],a[i][r]);
    }
    int mn=INT_MAX;
    int mx=0;
    for(int i=0;i<n;i++){
        int h=0;
        for(int j=0;j<k;j++){
            h=h*10+a[i][j];
        }
        cout<<h<<" ";
        mn=min(mn,h);
        mx=max(mx,h);
    }
    cout<<mx-mn<<"\n";
    return mx-mn;
}
int func2(int b[8][8]){
    for(int i=0;i<k;i++){
        for(int j=0;j<k ;j++){
            if(j==i)continue;
            //cout<<j<<"j ";
            for(int l=0;l<k ;l++){
                if(l==j || l==i)continue;

                for(int m=0;m<k ;m++){
                    if(m==j || m==i || m==l)continue;
                    cout<<i<<" "<<j<<" "<<l<<" "<<m<<"\n";
                    func(i,j,l,m);
                    for(int i=0;i<8;i++){
                        for(int j=0;j<8;j++){
                            a[i][j]=b[i][j];
                        }
                    }
                }
            }
        }
    }

}
int main(){
    //int n,k;
    cin>>n>>k;
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int j=k-1;
        while(x){
            int d=x%10;
            x=x/10;
            a[i][j--]=d;
        }
    }
    int b[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<8;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    int mn=INT_MAX;
    func2(b);
    cout<<mn<<"\n";
}
