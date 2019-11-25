#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[n];
    unordered_map<long long int,int>um;
    for(int i=0;i<n;i++){cin>>a[i];um[a[i]]=i+1;}
    sort(a,a+n);
    long long int x=a[1]-a[0];
    long long int f=0;
    long long int j=0;
    long long int l=-1;
    for(int i=0;i<n;i++){
        if(a[i]-a[0]!=x*j++){
            f++;
            j--;
            l=i;
        }
    }
    if(f==1){
        cout<<um[a[l]]<<"\n";
        return 0;
    }
    x=a[2]-a[0];
    long long int f1=0;
    l=-1;
    j=1;
    for(int i=2;i<n;i++){
        if(a[i]-a[0]!=x*j++){
            f1++;
            j--;
            l=i;
        }
    }
    if(f1==0){
        cout<<um[a[1]]<<"\n";
        return 0;
    }
    x=a[2]-a[1];
    long long int f2=0;
    j=1;
    l=-1;
    for(int i=2;i<n;i++){
        if(a[i]-a[1]!=x*j++){
            f2++;
            j--;
            l=i;
        }
    }
    if(f2==0){
        cout<<um[a[0]]<<"\n";
        return 0;
    }
    if(!f){
        cout<<1<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }

}
