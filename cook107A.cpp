#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char a[n][m];
        vector<char>v[n][m];
        //memset(a,'0',sizeof(a));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                //cout<<a[i][j]<<" ";
                if( a[i][j]!='-')
                {v[i][j].push_back(a[i][j]);
               // cout<<i<<" "<<j<<" "<<a[i][j]<<"\n";
               }
            }
        }
        vector<char>v1[n][m];
        //cout<<v[0][0][0]<<" "<<v[0][1].size()<<" "<<v[0][2].size()<<"\n";
        int cou=0;
        for(int t=0;t<max(n,m)+1;t++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
//                    for(int k=0;k<v[i][j].size();k++)cout<<v[i][j][k];
//                    if(v[i][j].size()==0)cout<<" ";
                    int x=0;
                    if(find(v[i][j].begin(),v[i][j].end(),'#')==v[i][j].end())
                    {x=v[i][j].size();}
                    else{
                        v[i][j].clear();
                        continue;
                    }
                    cou+=((x*(x-1))/2);
                    for(int k=0;k<v[i][j].size();k++){
                        if(v[i][j][k]=='U'){
                            if(i-1>=0){
                                //cout<<"l";
                                v1[i-1][j].push_back('U');
                            }
                        }
                        if(v[i][j][k]=='D'){
                            if(i+1<n)
                            v1[i+1][j].push_back('D');
                        }
                        if(v[i][j][k]=='R'){
                            if(j+1<m){
                                //cout<<"q";
                            v1[i][j+1].push_back('R');}
                        }
                        if(v[i][j][k]=='L'){
                            if(j-1>=0){
                                v1[i][j-1].push_back('L');
                            }
                        }
                        v[i][j].erase(find(v[i][j].begin(),v[i][j].end(),v[i][j][k]));
                    }
                }
                //cout<<"\n";
            }
            //cout<<t<<"\n";
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    for(int k=0;k<v1[i][j].size();k++){
                       // cout<<v1[i][j][k];
                        v[i][j].push_back(v1[i][j][k]);
                    }
                    v1[i][j].clear();
                }
            }
        }
        cout<<cou<<"\n";
    }
}
