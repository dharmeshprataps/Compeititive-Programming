#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string p="";
    int i=0;
    int i1=1;
    int su=1;
    int cost=0;
     int f1=1;
    while(i1<=n-1){
        i=0;
        int c=0;
        while(i<n-i1){
            int f=0;
            for(int j=i;j<i+i1;j++){
                if(s[j]!=s[j+1]){
                    f=1;
                    break;
                }
            }
            if(f){
                c+=max(1,i1);
            }
            i++;
        }
        int f=0;
        for(int j=n-i1-1;j<n-1;j++){
            if(s[j]!=s[j+1]){
                f=1;
                //cout<<j<<" kkk "<<j+1<<"\n";
                break;
            }
        }
        if(f){
        c+=max(1,i1-1);
       // cout<<"p";
        }
        else
        c++;
        cout<<i1<<" "<<c<<"\n";

        su+=c;

        if(su>=k){
            c-=(k-su);
            cost+=((i1)*c);
            cout<<cost<<"\n";
            f1=0;
            break;

        }
            cost+=((i1)*c); //cout<<su<<" "<<cost<<" "<<i1<<"\n";

        i1++;
    }

    if(f1){
        if(su+1==k){
            cout<<cost+n<<"\n";
        }
        else{
        cout<<-1<<"\n";
        }
    }
    //p+=s[s.length()-1];
    //cout<<p<<"\n";



}
