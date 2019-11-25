#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    int al=0;
    cout<<x<<" "<<y<<"\n";
    map<int ,int>um;
    int bc=1;
    int i=0;
    int arr[m][2];
    while(i<m-1){
        int x1,y1;
        cin>>x1>>y1;
        arr[i][0]=x1;
        arr[i][1]=y1;
        if(x1==x || y1==x)
            {bc++;i++;continue;}
        um[x1]++;
        um[y1]++;
        i++;
    }
    cout<<bc<<"\n";
    if((bc+um.rbegin()->second)==m)
    {

        cout<<"YES\n";
    }
    else{
        bc=1;
        //cout<<"p";
        i=0;
        map<long int,long int>um1;
        while(i<m-1){
                //cout<<"l";

        int x1=arr[i][0],y1=arr[i][1];
        cout<<x1<<" "<<y1<<" "<<y<<"\n";
        if(x1==y || y1==y)
            {bc++;i++;continue;}
        um1[x1]++;
        um1[y1]++;
        i++;
    }
    cout<<bc<<"\n";
    if((bc+um1.rbegin()->second)==m)
    {

        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }
}
