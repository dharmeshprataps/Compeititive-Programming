#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
 //   cout<<n<<" pp "<<m<<"\n";
    int a[n][m];
    int x=0;
    int f=0;
    pair<int,int> fi;
    vector<int>v;
    for(int i=0;i<n;i++){
        int f1=1;
        for(int j=0;j<m;j++){
        //cout<<i<<" lll "<<j<<"\n";
            cin>>a[i][j];

            if(j==0){
                x=x^a[i][j];v.push_back(1);
            }
            else if(a[i][j-1]!=a[i][j] && f1)
                {f=1;fi.second=j;fi.first=i; f1=0;}
        }
    }
    if(x!=0 || f){
        cout<<"TAK\n";
        if(x!=0)
            for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        else{
            for(int i=0;i<v.size();i++){
                if(i==fi.first)
                    cout<<fi.second+1<<" ";
                else
                    cout<<v[i]<<" ";
            }
        }

    }
    else
        cout<<"NIE\n";


}
