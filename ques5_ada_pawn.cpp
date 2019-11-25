#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int c=0;
        vector<string>v;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                string h="";
                int k=int('0');
                if(a[i][j]!='O')
                    continue;
                if((j>0 && a[i+1][j-1]=='O') && (j<n-1 && a[i+1][j+1]=='O')){
                    c+=2;
                    a[i+1][j-1]='.';
                    a[i+1][j+1]='.';

                    h+=to_string(i+1+1);
                    h+=" ";
                    h+=to_string(j-1+1);
                    h+=" R";
                    v.push_back(h);
                    h="";
                    h+=to_string(i+1+1);
                    h+=" ";
                    h+=to_string(j+1+1);
                    h+=" L";
                    v.push_back(h);
                }
                else if((j>0 && a[i+1][j-1]=='O' )){
                    a[i+1][j-1]='.';
                    c++;
                    h="";
                    h+=to_string(i+1+1);
                    h+=" ";
                    h+=to_string(j-1+1);
                    h+=" R";
                    v.push_back(h);
                }
                else if((j<n-1 && a[i+1][j+1]=='O')){
                    c++;
                    a[i+1][j+1]='.';
                    h="";
                    h+=to_string(i+1+1);
                    h+=" ";
                    h+=to_string(j+1+1);
                    h+=" L";
                    v.push_back(h);
                }

            }
        }
        cout<<c<<"\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<"\n";
        }
    }
}
