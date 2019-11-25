#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    unordered_map<long int ,long int>um2;
    unordered_map<long int ,long int>um;
    for(int i=0;i<n;i++){cin>>a[i];um[a[i]]++;}
    unordered_set<long int>us;
    for(auto i=um.begin();i!=um.end();i++){
        us.insert(i->second);
        um2[i->second]++;
    }
    for(auto i=us.begin();i!=us.end();i++)cout<<*i<<" ";cout<<"\n";
    if(us.size()==2 && ((*(us.begin())==1 && um2[*(us.begin())]==1) || (*(++us.begin())==1 && um2[*(++us.begin())]==1))){
        cout<<n<<"\n";
        return 0;
    }
    for(int i=n-1;i>=0;i--){
        um2[um[a[i]]]--;
        cout<<um[a[i]]<<" pppp "<<um2[um[a[i]]]<<"\n";
        if(um2[um[a[i]]]==0){
            us.erase(um[a[i]]);
        }
        um[a[i]]--;
        if(um[a[i]])
        {um2[um[a[i]]]++;
        if(um2[um[a[i]]]==1)
            us.insert(um[a[i]]);}
        for(auto i=us.begin();i!=us.end();i++)cout<<*i<<" ";cout<<"\n";
        if((us.size()==2 && ((*(us.begin())==1 && um2[*(us.begin())]==1) || (*(++us.begin())==1 && um2[*(++us.begin())]==1))) || (us.size()==1 && *us.begin()==1 && um2[*us.begin()]>1)){
            cout<<i<<"\n";
            return 0;
        }

    }

}
