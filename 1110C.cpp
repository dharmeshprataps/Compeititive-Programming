#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int invertBits(int num)
{
    int x = log2(num) + 1;

    for (int i = 0; i < x; i++)
    num = (num ^ (1 << i));
    return num;
    //cout << num;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int y=invertBits(k);
        int x;
        if(y==0){
            int mx=0;
            y=k;
            while(y>0){
                y--;
                x=__gcd(k^y,k&y);
                mx=max(mx,x);
                y=y>>1;
                //cout<<y<<"\n";
            }
            x=mx;
        }
        else{
            x=__gcd(k^y,k&y);
        }
        cout<<x<<"\n";
    }

}
