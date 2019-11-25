#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[100000];
int main(){
    memset(arr,-1,sizeof(arr));
    cin>>n>>m;
    int j=0;
    unordered_set<long long int>s;
    if(m<=n){
        cout<< n-m;
        return 0;
    }
    s.insert(m);
    unordered_set<long long int >s1;
    while(true){
        j++;
        for(auto i=s.begin();i!=s.end();i++){
            if(*i%2==0 && (*i)>n)
            s1.insert((*i)/2);
            else if((*i)-1>0 &&((*i)<n || (*i)%2!=0))
            s1.insert((*i)+1);
           // cout<<(*i)*2<<" "<<(*i)-1<<" ";
        }
       // cout<<"\n";
        s=s1;
        s1.clear();
        if(s.find(n)!=s.end())
            break;
    }
    cout<<j<<"\n";

}
