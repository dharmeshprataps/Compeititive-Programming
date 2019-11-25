#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int a[q+1][2];
    int arr[n+1]={0};
    vector<pair<int,int>>v;
    for(int i=1;i<=q;i++){
        cin>>a[i][0]>>a[i][1];
        for(int i1=a[i][0];i1<=a[i][1];i1++){
            arr[i1]++;
        }
    }
//    for(int i1=0;i1<n+1;i1++)cout<<arr[i1]<<" ";
//    cout<<"\n";

    int mx=0;
    int b[n+1];
    copy(arr,arr+n+1,b);
    for(int i=1;i<q;i++){
        for(int k=a[i][0];k<=a[i][1];k++){
            arr[k]--;
        }
        int b1[n+1];
        copy(arr,arr+n+1,b1);
        for(int j=i+1;j<q+1;j++){
            for(int k=a[j][0];k<=a[j][1];k++){
                arr[k]--;
            }
            int c=0;
            for(int m=1;m<=n;m++){
                if(arr[m])
                    c++;
            }
//            for(int i1=0;i1<n+1;i1++)cout<<arr[i1]<<" ";
//            cout<<"\n"<<i<<" "<<j<<" "<<c<<"\n";
            mx=max(mx,c);
            copy(b1,b1+n+1,arr);
        }
        copy(b,b+n+1,arr);
    }
    cout<<mx<<"\n";
}
