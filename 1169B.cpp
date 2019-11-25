#include<bits/stdc++.h>
#define intl long long
using namespace std;

int main(){
    intl n,m;
    cin>>n>>m;
    intl a[m][2];
    cin>>a[0][0]>>a[0][1];
    intl x=a[0][0];
    intl y=a[0][1];
    map<intl,intl>um;
    map<intl,intl>um2;
    intl c1=1;
    intl i=1;
    intl mx1=0;
    while(i<m){
        cin>>a[i][0]>>a[i][1];
        if(a[i][0]==x || a[i][1]==x)
            {c1++;i++;continue;}
        else {
                um[a[i][0]]++;
                um[a[i][1]]++;
            mx1=max(mx1,max(um[a[i][0]],um[a[i][1]]));
        }
        i++;//cout<<i<<" p\n";
    }
    i=1;
    intl c2=1;
    intl mx2=0;
    while(i<m){
        //cin>>a[i][0]>>a[i][1];
        if(a[i][0]==y || a[i][1]==y)
            {c2++;i++;continue;}
        else {
                um2[a[i][0]]++;
                um2[a[i][1]]++;
                mx2=max(mx2,max(um2[a[i][0]],um2[a[i][1]]));
        }
        i++;
        //cout<<i<<"\n";
    }
   // cout<<c1<<" "<<mx1<<" "<<c2<<" "<<mx2<<"\n";
    if(c1+mx1==m){
        cout<<"YES\n";
    }
    else if(c2+mx2==m){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO\n";
    }

}
