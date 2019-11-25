#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<int>v;
        for(int i=0;i<n;i++)cin>>a[i];
        int mn=a[n-1];
        v.push_back(mn);
        int an=-1;
        int i;
        int f=1;
        for(i=n-2;i>=0;i--){
            auto j=upper_bound(v.begin(),v.end(),a[i]);
            if(j!=v.end() && v[j-v.begin()]>a[i]){
                an=j-v.begin();
                f=0;
                break;
            }
            v.insert(j,a[i]);
        }
        //cout<<an<<"\n";
        if(f){
            cout<<-1<<"\n";
            continue;
        }
        //cout<<v[an]<<" "<<a[i]<<"\n";
        swap(v[an],a[i]);
        for(int i1=0;i1<=i;i1++){
            cout<<a[i1];
        }
        for(int j=0;j<v.size();j++)cout<<v[j];
        cout<<"\n";
    }

}
