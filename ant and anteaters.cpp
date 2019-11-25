#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        vector<char>v[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                char x;
                cin>>x;
                v[i][j].push_back(x);
            }
        }
        int su=0;
        for(int ti=0;ti<max(r,c);ti++){
            vector<char>v1[r][c];
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    auto to=find(v[i][j].begin(),v[i][j].end(),'#');
                   // cout<<"ll\n";
                    if(to!=v[i][j].end()){
                        v1[i][j].push_back('#');
                        v[i][j].clear();
                        continue;
                    }
                    su+=(v[i][j].size()*(v[i][j].size()-1))/2;
                    for(int k=0;k<v[i][j].size();k++){
                        if(v[i][j][k]=='L' && j-1>=0){
                            v1[i][j-1].push_back(v[i][j][k]);
                        }
                        if(v[i][j][k]=='R' && j+1<c){
                            //cout<<"xxx";
                            v1[i][j+1].push_back(v[i][j][k]);
                        }
                        if(v[i][j][k]=='U' && i-1>=0){
                            v1[i-1][j].push_back(v[i][j][k]);
                        }
                        if(v[i][j][k]=='D' && i+1<r){
                            v1[i+1][j].push_back(v[i][j][k]);
                        }
                    }
                    //cout<<r<<" "<<c<<"\n";
                    v[i][j].clear();
                }
            }
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    for(int k=0;k<v1[i][j].size();k++){
                        //cout<<"pppppp\n";
                        v[i][j].push_back(v1[i][j][k]);
                    }
                    v1[i][j].clear();
                }
            }


        }
        cout<<su<<"\n";
    }

}
