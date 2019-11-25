#include<bits/stdc++.h>
using namespace std;
//min querry
int t[4*100000];
int a[100000];
void build(int s,int e,int n){
    //cout<<s<<" "<<e<<"\n";
   if(s==e){
      //  cout<<a[s]<<" "<<n<<"\n";
       t[n]=a[s];
       return;
   }
   int m=(s+e)/2;
   build(s,m,2*n+1);
   build(m+1,e,2*n+2);
   t[n]=min(t[2*n+1],t[2*n+2]);
   //cout<<min(t[2*n+1],t[2*n+2])<<" "<<n<<"\n";
}
void update(int s,int e,int n,int i,int y){
    if(s==e){
        a[i]=y;
        t[n]=y;
        return;
    }
    int mid=(s+e)/2;
    if(s<=i && i<=mid){
        update(s,mid,2*n+1,i,y);
    }
    else{
        update(mid+1,e,2*n+2,i,y);
    }
    t[n]=min(t[2*n+1],t[2*n+2]);
}
int querry(int s,int e,int n,int l ,int r){
    if(l<=s && r>=e){
        return t[n];
    }
    if(s>r || e<l){
        return INT_MAX;
    }
    int mid=s+(e-s)/2;
    return (min(querry(s,mid,2*n+1,l,r),querry(mid+1,e,2*n+2,l,r)));
}
int main(){
    int n,q;
    cin>>n>>q;
    //int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    build(0,n-1,0);//for(int i=0;i<4*n;i++)cout<<t[i]<<" ";cout<<"\n";
    while(q--){
        char c;
        int a,b;
        cin>>c>>a>>b;
        if(c=='q'){
            cout<<querry(0,n-1,0,a-1,b-1)<<"\n";
        }
        if(c=='u'){
            update(0,n-1,0,a-1,b);
            //for(int i=0;i<4*n;i++)cout<<t[i]<<" ";cout<<"\n";
        }

    }


}
