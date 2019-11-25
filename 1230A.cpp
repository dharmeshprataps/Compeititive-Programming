#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int s=a+b+c+d;
    int q=s/2;
    if(q!=s/2.0){
        cout<<"NO\n";
        return 0;
    }
    if(q==a || q==b || q==c || q==d){
        cout<<"YES\n";
        return 0;
    }
    if(q==a+b || q==a+c || q==a+d || q==b+c || q==b+d || q==c+d){
        cout<<"YES\n";
        return 0;

    }
    cout<<"NO\n";

}
