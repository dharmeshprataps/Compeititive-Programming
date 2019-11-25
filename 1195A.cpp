#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[k+1]={0};
    int x;
    for(int i=0;i<n;i++){cin>>x;a[x]++;}
    int c=0;
    int s=0;
    for(int i=0;i<=k;i++){
        if(a[i]%2==0){
            s+=a[i];
        }
        else{
            s+=a[i]-1;
            c++;
        }
    }
    s+=ceil(c/2.0);
    cout<<s<<"\n";
}
