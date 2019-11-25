#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double n,a,b,x,y,z;
        cin>>n>>a>>b>>x>>y>>z;
        double ho=(z-b)/y;
        long int arr[n][32];
        vector<long int>v;
        unordered_set<long int>us;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i][0];
            for(int j=1;j<32;j++){
                a[i][j]=max(a[i][j-1]/2,0);
                sum+=a[i][j];
                if(us.find(a[i][j])!=us.end(){
                    v.push_back(a[i][j]);
                }
            }
        }
        double pp=(z-a-sum)/x);
        if(pp<ho){
            cout<<"RIP\n";
            break;
        }



    }


}
