
#include<bits/stdc++.h>
using namespace std;
int a[400000];
int Sieve()
{
    int n=400005;
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    int j=0;
    for (int p=2; p<=n; p++)
       if (prime[p])
          a[j++]=p;
    return j;
}
int main(){
    int n;

    cin>>n;int j=Sieve();
    int ar;
    int fla[3];
    fla[1]=0;
    fla[2]=0;
    for(int i=0;i<n;i++){cin>>ar;fla[ar]++;}
    int cur=0;
    //cout<<fla[1]<<" "<<fla[2]<<"\n";
    vector<int>v;
    for(int i=0;i<j;i++){
        int al=abs(cur-a[i]);
        int ab=min(al/2,fla[2]);
        //cout<<cur<<" "<<a[i]<<" "<<ab<<"\n";
        fla[2]-=ab;
        for(int i1=0;i1<ab;i1++)v.push_back(2);
        int ac=al-ab*2;
        //cout<<ac<<" "<<fla[1]<<"\n";
        if(ac<=fla[1]){
            fla[1]-=ac;
        }
        else{
            //cout<<"yes\n";
            break;
        }
        for(int i1=0;i1<ac;i1++)v.push_back(1);
        cur=a[i];
    }
   // cout<<fla[1]<<" "<<fla[2]<<"\n";
    for(int i=1;i<=2;i++){
        for(int j=0;j<fla[i];j++){
            v.push_back(i);
        }
    }

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
}
