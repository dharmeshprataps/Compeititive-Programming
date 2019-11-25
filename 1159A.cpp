#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    while(n--){
        char c;
        cin>>c;
        if(c=='+')
            s++;
        else if(s>0)
            s--;
    }
    cout<<max(0,s)<<"\n";
}
