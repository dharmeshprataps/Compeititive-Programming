#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(c[i-1][j]=='.' && c[i][j]=='.' && c[i+1][j]=='.' && c[i][j+1]=='.' && c[i][j-1]=='.'){
                //cout<<"yes";
                c[i-1][j]='#' ;
                c[i][j]='#' ;
                c[i+1][j]='#' ;
                c[i][j+1]='#';
                c[i][j-1]='#';
            }
        }
    }
    int f=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i][j]=='.'){
                f=0;
                cout<<"No\n";
                return 0;
            }
        }

    }

    if(f){
        cout<<"Yes\n";
    }

}
