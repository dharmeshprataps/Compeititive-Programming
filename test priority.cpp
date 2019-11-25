# include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(6);
    pq.pop();
    cout<<pq.top()<<"\n";
    while(!pq.empty()){
        cout<<pq.top()<<"\n";
        pq.pop();
    }


}
