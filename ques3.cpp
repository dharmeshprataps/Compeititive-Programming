#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pql;
    long long int su=0;
    long long int l=0;
    long long int ml=INT_MAX;
    int li=0;
    int mni=0;
    long long int mn=INT_MAX;
    for(int i=0;i<k;i++){
        l=l+a[i];
        //cout<<l<<"p\n";
        pql.push({a[i],i});
        pq.push({b[i],i});
    }
    su=l*pq.top().first;
    cout<<su<<"\n";
    unordered_set<int>s;
    for(int i=k-1;i<n;i++){
        while(s.find(pq.top().second)!=s.end()){
            pq.pop();
        }
        while(s.find(pql.top().second)!=s.end()){
            pql.pop();
        }
        if(pq.top().second!=pql.top().second){
            long long int p1=(l-pql.top().first+a[i])*(min(pq.top().first,b[i]));
            pair<int,int> alpha=pq.top();
            pq.pop();
            while(s.find(pq.top().second)!=s.end()){
                pq.pop();
            }
            long long int p2=(l-a[pq.top().second]+a[i])*(min(pq.top().first,b[i]));
            pq.push(alpha);
            if(su>p1 && su>p2){
                continue;
            }
            else if(p1>p2 && su>p1){
                s.insert(pql.top().second);
                su=p1;
            }
            else if(p1<p2 && su<p2){
                s.insert(pq.top().second);
                su=p2;
            }
        }
        else{
            pair<int,int> alpha=pq.top();
            pq.pop();
            while(s.find(pq.top().second)!=s.end()){
                pq.pop();
            }
            long long int p1=(l-pql.top().first+a[i])*(min(pq.top().first,b[i]));
            pq.push(alpha);
            if(su<p1){
                su=p1;
                s.insert(alpha.second);
            }
        }
        cout<<su<<"p\n";
    }
    cout<<su;
}
