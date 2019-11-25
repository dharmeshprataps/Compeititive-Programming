#include<bits/stdc++.h>
#define intl long long
#define ff fflush(stdout)
using namespace std;
void sieve(){
    if (limit > 2)
        cout << 2 << " ";
    if (limit > 3)
        cout << 3 << " ";
    bool sieve[limit];
    for (int i = 0; i < limit; i++)
        sieve[i] = false;
    for (int x = 1; x * x < limit; x++) {
        for (int y = 1; y * y < limit; y++) {
            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= true;
            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= true;
            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
        }
    }
    for (int r = 5; r * r < limit; r++) {
        if (sieve[r]) {
            for (int i = r * r; i < limit; i += r * r)
                sieve[i] = false;
        }
    }
    for (int a = 5; a < limit; a++)
        if (sieve[a])
            cout << a << " ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        intl x;
        cout<<1<<" "<<1000000000<<"\n";
        ff;
        cin>>x;
        intl p=round(pow(10,18));
        p=p-x;
        intl t=p;
        vector<int>v;
        //int j=sei[0];
        intl i=0;
        while(p){
            int f=0;
            if(p==j)
                v.push_back(j);
            while(j*j=<p && p%j==0){
                p=p/j;
                f=1;
            }
            if(f)
                v.push_back(j);
            i++;
        }
    }

}
