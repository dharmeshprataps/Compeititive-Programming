#include <bits/stdc++.h>
using namespace std;
char s[100002];int c,a;
int main(){
cin>>s;
int si=strlen(s);
for(int i=0;i<si;i++) {
	if(s[i]>='a'&& s[i]<='z')
		c++;
	else if(c>0) c--,a++;
	}
cout<<a;
}
