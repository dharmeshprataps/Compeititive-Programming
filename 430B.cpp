#include<bits/stdc++.h>
//copied but just basic implementation
using namespace std;
int a[103],i,n,t,y,m=0,s,x,k;
main()
{
    cin>>n>>k>>x;
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<n;i++) if (a[i]==x&&a[i+1]==x)
    {
        y=x;s=i;t=i+1;
        do {
        while (s>=1&&a[s]==y) s--;
        while (t<=n&&a[t]==y) t++;
        y=a[s];
        } while (s>=1&&t<=n&&y==a[t]&&(s>1&&a[s-1]==y||t<n&&a[t+1]==y));
        if (t-s-1>m) m=t-s-1;
    }
    cout<<m<<endl;
}
