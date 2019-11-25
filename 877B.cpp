//great solution but hopefully copied.!!!!!!!!
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a') b++, a++;
        if(s[i]=='b') c++;

        b=max(b, c);
        c=max(c, a);
    }
    cout<<b;
}
