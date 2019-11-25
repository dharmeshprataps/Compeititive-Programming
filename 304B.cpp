#include <bits/stdc++.h>
using namespace std;
int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool r(int y)
{
	return ((y%400==0)||(y%4==0&&y%100!=0));
}
int g(int yy,int mm,int dd)
{
	int ans=0;
	for(int i=1900;i<yy;i++)
	ans+=(365+r(i));
	for(int i=1;i<mm;i++)
	ans+=(m[i]+(i==2&&r(yy)));
	ans+=dd;
	return ans;
}
int main()
{
	int a1,a2,b1,b2,c1,c2;
	scanf("%d:%d:%d",&a1,&b1,&c1);
	scanf("%d:%d:%d",&a2,&b2,&c2);
	cout <<abs(g(a1,b1,c1)-g(a2,b2,c2))<<endl;
	return 0;
}
