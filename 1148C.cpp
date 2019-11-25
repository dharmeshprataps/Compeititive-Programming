    #include<bits/stdc++.h>
    using namespace std;
    int a[300005];
    int A[1500005],B[1500005];
    int p[300005],t;
    void s(int x,int y){
    	A[++t]=x;
    	B[t]=y;
    	p[a[x]]=y;
    	p[a[y]]=x;
    	swap(a[x],a[y]);
    }
    int main() {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        	cin>>a[i];
        for(int i=1;i<=n;i++){
        	p[a[i]]=i;
        }
        for(int i=2;i<n;i++){
        	if(i<=n/2){
        		if(p[i]>n/2){
        			s(1,p[i]);
        		}
        		s(p[i],n);
        		s(i,n);
        	}
        	else{
        		if(p[i]<=n/2){
        			s(p[i],n);
        		}
        		s(1,p[i]);
        		s(1,i);
        	}
        }
        if(a[1]==n)
        	s(1,n);
        cout<<t<<endl;
        for(int i=1;i<=t;i++)
        	cout<<A[i]<<" "<<B[i]<<endl;
        return 0;
    }
