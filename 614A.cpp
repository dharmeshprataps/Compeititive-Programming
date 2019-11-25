#include<bits/stdc++.h>
using namespace std;
int main(){
    long double l,r,k;
    cin>>l>>r>>k;
    long long int p=ceil(log(l)/log(k));
    long long int q=floor(log(r)/log(k));
    //cout<<q<<"\n";
    if(p<=q){
        for(long long int i=p;i<=q;i++){
            long long int ol=(long long int)pow(k,i);
            if(ol>r)
                break;
            cout<<ol<<" ";
        }
    }
    else
        cout<<-1<<"\n";


}
