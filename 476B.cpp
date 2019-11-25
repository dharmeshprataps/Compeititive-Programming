#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define ss second
#define ff first
#define rem 1000000007
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	string x, y;
	cin>>x>>y;
	int va = 0;
	for(int i=0;i<x.length();i++)
    {
        if(x[i]=='+')
            va++;
        else
            va--;
    }
    int vb=0,c=0;
    for(int i=0;i<y.length();i++)
    {
        if(y[i]=='+')
            vb++;
        else if(y[i]=='-')
            vb--;
        else
            c++;
    }
    int re = abs(va-vb);
    if(re>c)
        cout<<0<<endl;
    else
    {
        if((c-re)%2==0){
            double co = nCr(c, (c-re)/2);
            //cout<<co<<endl;
            co  /= pow(2, c);
            cout<<setprecision(12)<<co<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}
