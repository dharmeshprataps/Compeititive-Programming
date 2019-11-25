#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sa=0,sg=0;
    string s="";
    while(n--){
        int a,g;
        cin>>a>>g;
        if(sa+a-sg<=500){
            sa+=a;
            s+="A";
        }
        else if(sg+g-sa<=500){
            sg+=g;
            s+="G";
        }
    }
    cout<<s<<"\n";

}
