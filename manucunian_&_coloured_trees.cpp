#include<bits/stdc++.h>
using namespace std;
int fun(int parent[],int color[],int crawl,int c){
if(c==color[crawl])
return crawl;
if(parent[crawl]==0)
return -1;
fun(parent,color,parent[crawl],c);

}

int main(){

int n,c;
cin>>n>>c;
int parent[n+1];
int color[n+1];
parent[1]={0};
for(int i=2;i<=n;i++){
cin>>parent[i];
}
for(int i=1;i<=n;i++){
cin>>color[i];
}
for(int i=1;i<=n;i++){
if(i==1)
cout<<-1<<" ";
else
cout<<fun(parent,color,parent[i],color[i])<<" ";
}
cout<<endl;

}
