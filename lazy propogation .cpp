#include<bits/stdc++.h>
using namespace std;
//min querry
int arr[100000];
int trr[1000000];
int lazy[1000000];
void build(int s,int e, int n){
    if(s==e){
        trr[n]=arr[s];
        return ;
    }
    int mid=s+(e-s)/2;
    build(s,mid,2*n+1);
    build(mid+1,e,,2*n+2);
    tree[n]=min(tree[2*n+1],tree[2*n+2]);
}
void update(s,e,n,si,ei,y){
    if(lazy[n]!=0){
        tree[n]+=lazy[n];
        if(s!=e){
            lazy[n*2+1]=lazy[n];
            lazy[2*n+2]=lazy[n];
        }
        lazy[n]=0;
    }
    if(s>ei || e<si){
        return ;
    }
    if(s>=si && e<=ei){
        tree[n]+=y;
        if(ss!=se){
            lazy[2*n+1]=y;
            lazy[2*n+2]=y;
        }
    }
    int mid=s+(e-s)/2;
    update(s,mid,2*n+1,si,se,y);
    update(mid+1,e,2*n+2,si,se,y);
    tree[n]=min(tree[2*n+1],tree[2*n+2]);
}
int querry(n,s,e,si,ei){
    if(lazy[n]!=0){
        tree[n]+=lazy[n];
        if(s!=e){
            lazy[2*n+1]=lazy[n];
            lazy[2*n+2]=lazy[n];
        }
        lazy[n]=0;
    }
    if(s>ei || e<si){
        return INT_MAX;
    }
    if(s>=si || e<=ei){
        return tree[n];
    }
    int mid=s+(e-s)/2;
    return min(querry(s,mid,n,si,ei),querry(mid+1,e,n,si,ei));
}
int main(){
    memset(lazy,0,sizeof(lazy));
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    build(0,n-1,0);

}
