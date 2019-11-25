#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n;
int b_search(int a1){
    int l=0;
    int h=n;
    int mid;
    while(l<h){
        mid=l+(h-l)/2;
        if(a[mid]==a1)
            return mid;
        if(a[mid]>a1)
            h=mid;
        else
            l=mid+1;
    }
    return l;


}
int main(){
    cin>>n;

    int x=0;
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=x;
        x=a[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a1;
        cin>>a1;
        cout<<b_search(a1)<<"\n";
    }

}
