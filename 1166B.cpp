#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=1;
    int i;
    for(i=5;i<n/2;i++){
        if(n%i==0){
            f=0;
            break;
        }
    }
    if(f ||  n/i<5)
       {

        cout<<-1;return 0;}
    char a[i][n/i];
    int l=n/i;
    int j=i;
  //  cout<<l<<" "<<j<<" "<<i<<"\n";
    char c[]={'a','e','o','i','u'};
    for(int i=0;i<j;i++){
        for(int j1=0;j1<5;j1++){
            a[i][j1]=c[(j1+i)%5];
           // cout<<a[i][j1]<<"p";
        }
        //cout<<"\n";
    }
    for(int i=0;i<j;i++){
        for(int j1=5;j1<l;j1++){
            a[i][j1]=c[(j1+i)%5];
        }
    }
    for(int i=0;i<j;i++){
        for(int j1=0;j1<l;j1++){
            cout<<a[i][j1]<<"";
        }
        //cout<<"\n";
    }
}
