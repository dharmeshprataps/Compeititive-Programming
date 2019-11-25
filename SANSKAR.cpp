#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<lli>
#define vii vector<ii>
#define lli long long int
#define endl '\n'
using namespace std;
int main()
{
	lli t , n , k , x;
	cin>>t;

	while(t--)
	{
		cin>>n>>k;
		lli sum = 0;
		vi ar;

		REP(i , n) cin>>x , ar.pb(x) ,sum += x;

		if(sum % k)
		{
			cout<<"no\n";
			continue;
		}

		x = sum / k;
		REP(i , k)
		{
			bool done = false;
			for(int j=1;j<((lli)1<<ar.size());j++)
			{
				sum = 0;
				for(int l=0;l<ar.size();l++)
				if(j & ((lli)1<<l))
				sum += ar[l];

				if(sum == x)
				{
					vi tmp;
					for(int l=0;l<ar.size();l++)
					if((j & ((lli)1<<l)) == 0)
					tmp.pb(ar[l]);

					ar = tmp;
					done = true;
					break;
				}
			}

			if(!done)
			{
				cout<<"no\n";
				goto exit;
			}
		}

		cout<<"yes\n";
		exit:;
	}
}
