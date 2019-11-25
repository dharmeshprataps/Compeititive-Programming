#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] = abs(a[i]);
	}
	sort(a, a + n);
	long long ans = 0;
	for (int i = 0; i < n; i++)
		ans += upper_bound(a, a + n, 2 * a[i]) - a - i - 1;
	cout << ans;
}
