#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<long int ,int>um;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        um[a]++;
    }
    //cout<<"p";
    int f=1;
    for(auto i=um.begin();i!=um.end();i++){
        if((n-(i->first))!=i->second){
            f=0;
            cout<<"Impossible";
            break;
        }
    }
    if(f){
        cout<<"Possible\n";
        int k=1;
        for(auto i=um.begin();i!=um.end();i++){
            for(int j=0;j<i->second;j++){
                cout<<k<<" ";
            }
            k++;
        }
    }
}
