#include<iostream>
int n,i,r;std::string s,t="RGB";
int main(){
	for(std::cin>>n>>s;i<n-1;i++)
		if(s[i+1]==s[i]){
			r++;
			for(auto e:t)if(e-s[i]&&e-s[i+2])s[i+1]=e;
		}
	std::cout<<r<<"\n"+s;
}
