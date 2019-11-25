#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v[10];
    v[2].push_back(2);
    v[3].push_back(3);
    v[4].push_back(3);
    v[4].push_back(2);
    v[4].push_back(2);
    v[5].push_back(5);
    v[6].push_back(5);
    v[6].push_back(3);
    v[7].push_back(7);
    v[8].push_back(7);
    v[8].push_back(2);
    v[8].push_back(2);
    v[8].push_back(2);
    v[9].push_back(7);
    v[9].push_back(3);
    v[9].push_back(3);
    v[9].push_back(2);
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v1;
//    for(int i=0;i<10;i++){
//        for(int j=0;j<v[i].size();j++){
//            cout<<v[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
    for(int i=0;i<n;i++){

        int k=int(s[i])-48;
        if(k==0 || k==1)
            continue;
            for(int j=0;j<v[i].size();j++){
                //cout<<v[i][j]<<" ";
                v1.push_back(v[i][j]);
            }
            //cout<<"\n";
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
    }
