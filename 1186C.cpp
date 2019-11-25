#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string p;
    cin>>p;
    int x=0;
    for(int i=0;i<p.length();i++){
        if(p[i]=='1')x++;
    }
    int d=0;
    int cou=0;
    for(int i=0;i<s.length();i++){
        if(i<p.length()){
            if(s[i]=='1')
            d++;
            if(i!=p.length()-1)continue;
        }
        else{
            if(s[i]=='1'){
                d++;
            }
            if(s[i-p.length()]=='1'){
                d--;
            }
        }
        if(d%2==x%2){
            cou++;
        }
    }
    cout<<cou<<"\n";


}
