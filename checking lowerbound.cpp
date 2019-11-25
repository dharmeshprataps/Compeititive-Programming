#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(5);v.push_back(6);
    v.push_back(6);
    v.push_back(7);v.push_back(7);v.push_back(9);
    v.push_back(10);
    v.push_back(12);
    v.push_back(14);
    v.push_back(15);
    //v.push_back(-1);
    cout<<v[lower_bound(v.begin(),v.end(),13)-v.begin()]<<"\n";
    cout<<v[lower_bound(v.begin(),v.end(),12)-v.begin()]<<"\n";
    cout<<v[upper_bound(v.begin(),v.end(),13)-v.begin()]<<"\n";
    cout<<v[upper_bound(v.begin(),v.end(),12)-v.begin()]<<"\n";
    cout<<v[lower_bound(v.begin(),v.end(),20)-v.begin()]<<"\n";
    cout<<v[upper_bound(v.begin(),v.end(),20)-v.begin()]<<"\n";
    cout<<lower_bound(v.begin(),v.end(),20)-v.begin()<<"\n";
    cout<<upper_bound(v.begin(),v.end(),20)-v.begin()<<"\n";
}
