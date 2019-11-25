#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl r;
    cin>>r;
    intl x=1;
    while(x*x+x+1<r){
        intl p=r-(x*x+x+1);
        if(!(p%(2*x))){
            cout<<x<<" "<<p/(2*x)<<"\n";
            return 0;
        }
        x++;
    }
    cout<<"NO\n";

}
