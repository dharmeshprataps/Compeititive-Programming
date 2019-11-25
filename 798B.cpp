#include <iostream>
#include <string>
using namespace std;
string s[50];
int main() {
	int n,ans=1e9,t=0;cin >> n;
	string tmp;
	for (int i=0;i<n;i++)cin >> s[i];

	for (int i=0;i<n;i++){
		t=0;
		for (int j=0;j<n;j++){
			tmp = s[j]+s[j];
			if (tmp.find(s[i]) == string::npos){
				cout << "-1";
				return 0;
			}
			t+= tmp.find(s[i]);
		}
		ans = min(t, ans);
	}
	cout << ans;
}
