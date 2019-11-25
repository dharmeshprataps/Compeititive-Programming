#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={0,2,4,5,6,8,12,33};
    cout<<lower_bound(a,a+8,9)-a<<"\n";
    cout<<upper_bound(a,a+8,8)-a<<"\n";

}
