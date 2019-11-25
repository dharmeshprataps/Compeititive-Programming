#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int>s;
    int ans=a[0]^a[1];
    for(int i=0;i<n;i++){
		int x=a[i];
		while(!s.empty()){
			ans = max(ans,s.top()^x);
			if(s.top() < x)
				s.pop();
			else
				break;

		}
		s.push(x);
	}
    cout<<ans<<"\n";

}
