#include<bits/stdc++.h>
using namespace std;
int a,b;
void func(int x){
    int arr[6]={4,8,15,16,23,42};
    unordered_map<int,int>um;
    um[4]=1,um[8]=1,um[15]=1,um[16]=1,um[23]=1,um[42]=1;
    for(int i=0;i<6;i++){
        int al=arr[i];
        if(x%al==0 && um[(x/al)]){
            a=al;
            b=x/al;
            break;
        }
    }
}
int main(){
    cout<<"? "<<1<<" "<<2<<"\n";

    fflush(stdout);
    a=-1;b=-1;
    unordered_map<int,int>um;
    int arr[6]={0};
    int x;
    cin>>x;
    func(x);
    int a1=a;
    int b1=b;
//    cout<<"! ";
//    for(int i=0;i<6;i++)cout<<arr[i]<<" ";
    cout<<"? "<<2<<" "<<3<<"\n";
    fflush(stdout);
    cin>>x;
    a=-1;
    b=-1;
    func(x);
    if(a1==a || b1==a){
        arr[0]=a1+b1-a;
        arr[1]=a;
        arr[2]=b;
    }
    if(a1==b || b1==b){
        arr[1]=b;
        arr[0]=a1+b1-b;
        arr[2]=a;
    }
//    cout<<"! ";
//    for(int i=0;i<6;i++)cout<<arr[i]<<" ";
    cout<<"? "<<3<<" "<<4<<"\n";
    fflush(stdout);
    cin>>x;
    a1=a;
    b1=b;
    a=-1;
    b=-1;
    func(x);
    if(a1==a || b1==a){
        //arr[0]=a1+b1-a;
        arr[3]=b;
    }
    if(a1==b || b1==b){
        arr[3]=a;
        //arr[0]=a1+b1-b;
    }
//    cout<<"! ";
//    for(int i=0;i<6;i++)cout<<arr[i]<<" ";
    cout<<"? "<<4<<" "<< 5<<"\n";
    fflush(stdout);
    cin>>x;
    a1=a;
    b1=b;
    a=-1;
    b=-1;
    func(x);
    if(a1==a || b1==a){
        //arr[0]=a1+b1-a;
        arr[4]=b;
    }
    if(a1==b || b1==b){
        arr[4]=a;
        //arr[0]=a1+b1-b;
    }
    for(int i=0;i<5;i++){
        um[arr[i]]++;
    }
    if(!um[4])arr[5]=4;
    if(!um[8])arr[5]=8;
    if(!um[15])arr[5]=15;
    if(!um[16])arr[5]=16;
    if(!um[23])arr[5]=23;
    if(!um[42]])arr[5]=42;
    fflush(stdout);
    cout<<"! ";
    for(int i=0;i<6;i++)cout<<arr[i]<<" ";
    cout<<"\n";
}
