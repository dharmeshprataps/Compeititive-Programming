#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int f,d,e;
    cin>>d>>e>>f;
    d=d-a;
    if(e-b>=0){
        e=e-b;
    }
    else{

        d=d-(b-e);
        e=0;
    }
    if(f>=0 && d>=0 && d+f+e>=c){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }


}




