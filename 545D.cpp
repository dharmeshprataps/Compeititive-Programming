#include<bits/stdc++.h>
using namespace std;
int n;
long int a[100005];
int main(){
    cin>>n;
    long int mn=INT_MAX;
    for(int i=0;i<n;i++){cin>>a[i];mn=min(mn,a[i]);}

    long int su=mn;
    sort(a,a+n);
    int i=1;
    int t=1;
    while(i<n){
        if(a[i]>=su){
            su+=a[i];
            t++;
            //cout<<su<<" "<<a[i]<<"\n";
        }
        i++;
    }
    cout<<t<<"\n";

}
