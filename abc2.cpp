#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int p=0;int n1=0;
    int mn=INT_MIN;
    int mn1=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=0){
            p++;
        }
        else{
            n1++;
        }
        if(abs(a[i])>=mn1 && a[i]!=-1){
            if(abs(a[i])==mn1)
                mn=max(mn,a[i]);
            else{
                mn=a[i];
            mn1=abs(a[i]);
            }
        }
    }
    //cout<<mn<<"\n";
    int f=1;
    int mni=-1;
    for(int i=0;i<n;i++){
        if(a[i]==mn && f){
            f=0;
            mni=i;
            continue;
        }
        if(a[i]>=0){
            a[i]=-1*a[i]-1;
        }
    }
    //cout<<mni<<"\n";
    if((p%2==0 && n1%2==0) || (p%2!=0 && n1%2!=0)){
        if(mni!=-1 && a[mni]>=0)
        a[mni]=-1*a[mni]-1;
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
    }
    else{
        if(mni==-1){
            a[0]=-1*a[0]-1;
        }
        if(a[mni]<0){
            a[mni]=-1*a[mni]-1;
        }
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
    }
}
