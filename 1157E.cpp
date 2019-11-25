#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    multiset<int>b;
    int x;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){cin>>x;b.insert(x);}
    //sort(b.begin(),b.end());
    int c[n];
    //int d[n]={0};
    int l=0;
    for (int i = 0; i < n; ++i) {
		auto it = b.lower_bound(n - a[i]);
		if (it == b.end()) it = b.begin();
		cout << (a[i] + *it) % n << " ";
		b.erase(it);
	}
}
