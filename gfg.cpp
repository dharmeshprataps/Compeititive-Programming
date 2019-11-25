#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    int f1=1;
	    string s="";
    	while(n/10!=0){
    	    int f=1;int p=1;
    	    int i=2;
    	    while(n/10!=0){
    	        while(n/10!=0 && n%i==0 && (p*i)/10==0){
    	           p=p*i;
    	           n=n/i;
    	        }

    	        if(p!=1 && (p%i==0 && (p*i)/10!=0)){
	                s+=to_string(p);
	                p=1;
	                f=0;
	            }
	            if(n/10==0){
    	            break;
    	        }
	            if(p%i!=0){
	                i++;
	            }
    	    }
    	    if(f && n/10!=0){
    	        cout<<-1<<"\n";
    	        f1=0;
    	        break;
    	    }
    	}

    	if(n/10==0){
    	    s+=to_string(n);
    	}
    	if(f1)
    	{sort(s.begin(),s.end());
    	cout<<s<<"\n";}
	}
	return 0;
}
