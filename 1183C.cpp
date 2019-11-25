#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        intl k,n,a,b;
        cin>>k>>n>>a>>b;
        if(k>n*a){
            cout<<n<<"\n";
        }
        else{
            k=n*a-k;
            k++;
            intl p=ceil(k/double(a-b));
            //cout<<p<<"\n";
            if(p<=n){
                cout<<n-p<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
        }

    }
}
