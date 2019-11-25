#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar,al,br,bl;
    cin>>ar>>al>>br>>bl;
    int fl=0;
    if(ar>=bl){
       if((ar-bl)<=1){
            cout<<"YES";
            return 0;
       }
       else{
            fl=1;
       }
    }
    else{
        if((bl<=(2*ar+2))){
            cout<<"YES";
            return 0;
        }
        else{
            fl=1;
        }
    }
    if(al>=br){
       if((al-br)<=1){
            cout<<"YES";
            return 0;
       }
       else{
            fl=1;
       }
    }
    else{
        if((br<=(2*al+2))){
            cout<<"YES";
            return 0;
        }
        else{
            fl=1;
        }
    }
    if(fl)
        cout<<"NO";
}
