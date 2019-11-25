//4
//0110
//0101
//00001000
//0001000
#include<bits/stdc++.h>
#define int long long
using namespace std;
int t;
string s;
int nxt[1000000];

main() {
	cin >> t;
	for(int tc = 0; tc < t; ++tc){
		cin >> s;
		for(int i = 0; i < s.size(); ++i)
			if(s[i] == '1') nxt[i] = i;
			else nxt[i] = (i == 0? -1 : nxt[i - 1]);
		int res = 0;
		for(int r = 0; r < s.size(); ++r){
			int sum = 0;
			for(int l = r; l >= 0 && r - l < 20; --l){
				if(s[l] == '0') continue;
				sum += 1 << (r - l);
				if(sum <= r - (l == 0? -1 : nxt[l - 1]))
					++res;
			}
		}
		cout << res << endl;
	}

	return 0;
}
