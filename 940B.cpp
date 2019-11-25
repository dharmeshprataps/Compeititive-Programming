#include<bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    intl n,k,a,b;
    cin>>n>>k>>a>>b;
    intl c=0;
    if( k==1){cout<<(n-1)*a<<"\n";
        return 0;
    }
    intl m=n;
    while(n!=1){
        if(n%k==0){
            if(a*(n-n/k)>b){
            n=n/k;
            c+=b;
            }
            else{
                c+=(a*(n-n/k));
                n=n/k;
            }
        }
        else{

            if(n>k){
                c+=(a*(n%k));
                n=n-(n%k);
            }
            else{
                c+=(a*(n-1));
                n=1;
            }
        }
        //cout<<n<<" "<<c<<"\n";
    }
    cout<<c<<"\n";

}
