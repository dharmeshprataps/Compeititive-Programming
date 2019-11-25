#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000];
int ans=INT_MAX;
int ans1[1000];
int f11=0;
int func1(int o,int p){

    int f=1;
    for(int i=o-1;i>=0;i--){
        if(a[i]!=-1){
            p=p-(o-i);
            f=0;break;
        }
    }
    if(f){
        p=p-(o+1);
    }
    f=1;
    for(int i=o+1;i<n;i++){
        if(a[i]!=-1){
            p=p-(i-o);
            f=0;break;
        }
    }
    if(f){
        p=p-(n-o);
    }
    return p;
}
void func(int l,int s){
    //cout<<s<<" "<<l<<"\n";
    //for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<"\n";
    if(f11)
        return ;
    if(ans>s && l==n){
        ans=s;
        for(int i=0;i<n;i++){
            ans1[i]=a[i];
        }
    }
    if(ans==0){
        f11=1;
        return ;
    }
    if(l>=n){
        return;
    }
    for(int i=0;i<n;i++){
        if(a[i]!=-1){
            continue;
        }
        int p=func1(i,s);
        //cout<<p<<" oo "<<i<<" "<<l<<"\n";
        if(p<0){
            continue;
        }
        a[i]=l;
        func(l+1,p);
        a[i]=-1;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(a,-1,sizeof a);
        ans=INT_MAX;
        memset(ans1,-1,sizeof ans1);
        f11=0;
        cin>>n>>m;
        func(0,m);
        if(ans!=INT_MAX)
        cout<<ans<<"\n";
        else cout<<-1<<"\n";
        //for(int i=0;i<n;i++)cout<<ans1[i]<<" ii ";cout<<"\n";
    }

}
