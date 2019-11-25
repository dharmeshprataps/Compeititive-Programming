#include<bits/stdc++.h>
using namespace std;
int main(){
    double r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    double y=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    //cout<<y;
    long long int z=ceil(y/(r*2)) ;
    cout<<z<<"\n";

}
