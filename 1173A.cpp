#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c==0){
        if(a>b){
            cout<<'+'<<"\n";
        }
        else if(a==b){
            cout<<'0'<<"\n";
        }
        else{
            cout<<'-'<<"\n";
        }
    }
    else if(max(a,b)-min(a,b)>c){
        if(a>b){
            cout<<'+'<<"\n";
        }
        else if(b>a){
            cout<<'-'<<"\n";
        }
        else{
            cout<<'0'<<"\n";
        }
    }
    else{
        cout<<'?'<<"\n";
    }

}
