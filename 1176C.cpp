#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    unordered_map<int,int>um;
    for(int i=0;i<n;i++){
        if(a[i]==4){
            um[a[i]]++;
        }
        else if(a[i]==8){
            if(um[4]>um[8]){
                um[8]++;
            }
        }
        else if(a[i]==15){
            if(um[8]>um[15]){
                um[15]++;
            }
        }
        else if(a[i]==16){
            if(um[15]>um[16]){
                um[16]++;
            }
        }
        else if(a[i]==23){
            if(um[16]>um[23]){
                um[23]++;
            }
        }
        else if(a[i]==42){
            if(um[23]>um[42]){
                um[42]++;
            }
        }
    }
    cout<<n-6*um[42]<<"\n";
}
