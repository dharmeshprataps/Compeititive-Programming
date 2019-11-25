#include<bits/stdc++.h>
using namespace std;
int a[1000006];
unordered_set<int>s;
void printDivisors(int n) {
    for (int i=1; i<=sqrt(n); i++) {
        if (n%i == 0) {
            if (n/i == i )
                a[i]++;
            else{
                //if(s.find(i)!=s.end())
                a[i]++;
                //if(s.find(n/i)!=s.end())
                a[(n/i)]++;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    for(int i12=0;i12<t;i12++){
        memset(a,0,sizeof a);
        int n;cin>>n;
        s.clear();
        int ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
            printDivisors(x);
            ans=max(ans,a[x]);
            //for(int i=0;i<28;i++)cout<<a[i]<<" ";cout<<"\n";
        }
        cout<<ans-1<<"\n";
    }


}
