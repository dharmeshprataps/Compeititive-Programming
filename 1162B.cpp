#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mat1[n][m];
    int mat2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat2[i][j];
        }
    }
    int f=1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(mat1[i][j]>=mat1[i][j+1] || mat1[i][j]>=mat1[i+1][j]){
                if(mat2[i][j]<mat1[i+1][j] && mat2[i][j]<mat1[i+1][j] && mat1[i][j]<mat2[i+1][j] && mat1[i][j]<mat2[i+1][j])
                    swap(mat2[i][j],mat1[i][j]);
                else if(mat2[i][j+1]<mat1[i][j] && mat2[i][j]<mat1[i+1][j] && mat1[i][j]<mat2[i+1][j] && mat1[i][j]<mat2[i+1][j])
                    swap(mat2[i][j],mat1[i][j]);
            }
        }
    }

    if(f)
        cout<<"Possible\n";

}
