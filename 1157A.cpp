#include<bits/stdc++.h>
using namespace std;
long int func(long int n){
    n++;

    while(n%10==0){
        n=n/10;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    unordered_map<long int,long int>um;
    um[1]=1;
    um[2]=1;
    um[3]=1;
    um[4]=1;
    um[5]=1;
    um[6]=1;
    um[7]=1;
    um[8]=1;
    um[9]=1;
    int c=9;
    if(!um[n]){
        c++;
        um[n]=1;
    }

    while(n!=0 ){
        //cout<<n<<" s \n";
        n=func(n);
        if(!um[n]){
            um[n]=1;
            c++;
        }
        if(n==1)
            break;
//        cout<<n<<"\n";
    }
    cout<<c<<"\n";
}
