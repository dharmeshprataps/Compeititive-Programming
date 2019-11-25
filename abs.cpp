#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char c[n][m];
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c[i][j];
        }
    }
    //map<pair<int,pair< int,int>>, int> um;
    int c1=0;
    memset(b,0,sizeof(b));
    for(int i=2;i<n;i++){
        for(int j=0;j<m;j++){
            int k=1;
            int i1=i;
            int j1=j;
            while(c[i1][j1]==c[i1-1][j1]){
                k++;
                i1--;
            }
           // cout<<k<<" "<<i<<" qq\n";
            if(3*k>i+1){
                continue;
            }
            int f=0;
            for(int l=1;l<k;l++){
                if(c[i-k][j]!=c[i-k-l][j]){
                    f=1;
                    break;
                }
            }//cout<<k<<" "<<i<<" pp\n";
            if(f){
                continue;
            }

            if(c[i-2*k+1][j]==c[i-2*k][j]){
                continue;
            }
            int f1=0;

            for(int l=1;l<k;l++){
                if(c[i-2*k][j]!=c[i-2*k-l][j]){
                    f1=1;
                    break;
                }
            }
            if(f1){
                continue;
            }
            b[i][j]++;
            int f2=1;

            if(j>=1){
                for(int l=i-3*k+1;l<=i;l++){
                    if(c[l][j]!=c[l][j-1]){
                        f2=0;
                        //cout<<l<<" "<<j<<"\n";
                        break;
                    }
                }
                if(f2){
//                    cout<<i<<" "<<j<<"\n";
//                    cout<<b[i][j]<<" "<<b[i-1][j]<<"\n";
                    b[i][j]+=b[i][j-1];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //cout<<b[i][j]<<" ";
            c1+=b[i][j];
        }
        //cout<<"\n";
    }

//    for(auto i=um.begin();i!=um.end();i++){
//        //cout<<i->first.first<<" "<<i->first.second.first<<" "<<i->first.second.second<<" "<<i->second<<"\n";
//        c1+=i->second;
//    }
    cout<<c1<<"\n";

}
