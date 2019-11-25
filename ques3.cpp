#include<bits/stdc++.h>
#define intl long long
using namespace std;
int main(){
    intl t;
    cin>>t;
    while(t--){
        intl k,n,a,b;
        cin>>k>>n>>a>>b;
        if(a<=b){
            if(a*n<k){
                cout<<n<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
            continue;
        }
        if(double(double(k%a)/b+double(k)/a)>n){
            cout<<min(n,(k/a))<<"\n";
            continue;
        }
        intl x=(double(b*n)-double(k))/(b-a);
        intl y=(double(a*n)-double(k))/(a-b);
        if(y<0){
            x+=y;
        }
        if(a*x+(n-x)*b==k){
            if(x>0){
                if(a>b)
                cout<<min(x-1,n)<<"\n";
            }
            else
                cout<<-1<<"\n";
        }
        else{
            if(a*x>=k){
                cout<<min((n),(k/a))<<"\n";
            }
            else if(x<0){
                cout<<-1<<"\n";
            }
            else{
                cout<<min(n,x)<<"\n";
            }
        }

    }


}
