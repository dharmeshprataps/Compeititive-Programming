#include <bits/stdc++.h>
#define int long long

using namespace std;
/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY a
 */

void solve(int n, vector<int> a) {
    // Print your result
    int d=a.size();
    sort(a.begin(),a.end(),greater<int>());
    int s=0;
    double l=a[n-1];
    int p=l*n;
    //for(int i=0;i<n;i++);
    for(int i=n;i<d;i++){
        s+=a[i];
    }
    //cout<<s<<" "<<p<<"\n";
    double h=INT_MAX;

    while(h-l>=0.00000001){
        //cout<<l<<" "<<h<<"\n";
        double mid=l+(h-l)/2;
        p=0;
        int c1=0;
        for(int i=0;i<n;i++){
            if(a[i]<mid){
                p+=a[i];
                c1++;
            }
            else{
               // p+=mid;
            }
        }

        double k=mid*c1-p;

      //  cout<<k<<" kkkkkkk "<<p<<"\n";
        if(abs(k-s)<0.00001)
            {
            cout<<fixed<<setprecision(15)<<mid<<"\n";
            return ;
        }
        if(k<s){
            l=mid-0.000000001;
        }
        else
            h=mid+0.000000001;
    }

}

int32_t main()
{
    int n,d;
    cin>>n>>d;
    if(n>d){
        cout<<"0\n";
        return 0;
    }
    vector<int>v(d);
    int mn=LLONG_MAX;
    for(int i=0;i<d;i++){cin>>v[i];mn=min(mn,v[i]);}
    if(n==d){
        cout<<mn<<"\n";
        return 0;
    }
    solve(n,v);


    return 0;
}

