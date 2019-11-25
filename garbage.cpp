#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(21);
    s.insert(22);
    unordered_set<int>s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(21);
    s1.insert(22);
    auto p=s.begin();
    while(p!=s.end()){
        cout<<*p<<" ";
        s.erase(*p);
        //p++;
    }

}
