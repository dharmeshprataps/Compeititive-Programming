#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>c[i][j];
            }
        }
        int a[n][n];
        memset(a,0,sizeof a);
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                if(c[i][j]=='.' ){
                    if(j==n-1){
                        a[i][j]=1;
                    }
                    else{
                        a[i][j]=a[i][j+1];
                    }
                }
            }
        }
        int cou=0;
        for(int j=0;j<n;j++){
            for(int i=n-1;i>=0;i--){
                if(c[i][j]=='#')break;
                if(a[i][j]==1){
                    cou++;
                }
            }
        }
//        for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                cout<<a[i][j]<<" ";
//            }
//            cout<<"\n";
//        }
        cout<<cou<<"\n";


    }


}
