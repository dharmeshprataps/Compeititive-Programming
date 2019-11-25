#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int f=0;
    int f1=0;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(a[i][j]!='*')
            continue;
            //cout<<"r";
            //cout<<"q";
            if((a[i+1][j]!='*' || a[i-1][j]!='*' || a[i][j+1]!='*' || a[i][j-1]!='*')){
                continue;
            }
            //cout<<"p";
           // int u=0,d=0,r=0,l=0;
           //cout<<i<<" "<<j<<"\n";
            int i1=i;
            int j1=j;
            while(i1<n && a[i1+1][j1]=='*'){
                i1++;
             //   u++;
                a[i1][j1]='.';
            }
             i1=i;
             j1=j;
            while(i1>0 && a[i1-1][j1]=='*'){
                i1--;
               // d++;
                a[i1][j1]='.';
            }
            i1=i;
             j1=j;
            while(j1>0 && a[i1][j1-1]=='*'){
                j1--;
                //l++;
                a[i1][j1]='.';//cout<<i1<<" "<<j1<<"\n";
            }
            i1=i;
            j1=j;
            while(j1<n && a[i1][j1+1]=='*'){
                j1++;
                //r++;
                a[i1][j1]='.';

            }
            a[i][j]='.';
            f=1;
            break;
        }
        if(f){
            break;
        }
    }
   // cout<<"\n\n\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         //   cout<<a[i][j];
            if(a[i][j]=='*'){
                cout<<"NO\n";
                return 0;
            }
        }
       // cout<<"\n";
    }
    cout<<"YES\n";

}
