#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int n;
    cin>>n;
    double a[n];
    intl su=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        su+=floor(a[i]);
    }
    intl i=0;
    while(su!=0 && i<n){
        if(floor(a[i])!=a[i]){
        a[i]++;
        su+=1;
        }
        i++;
    }
    for(intl i=0;i<n;i++){
        cout<<floor(a[i])<<"\n";
    }

}
