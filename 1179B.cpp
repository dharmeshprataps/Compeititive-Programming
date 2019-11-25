    #include<bits/stdc++.h>
    using namespace std;
    vector<pair<int,int>> jump;
    int main()
    {
        int i,j,k,l;
        int n,m;
        scanf("%d %d",&n,&m);
        for(i=1;i<=(n/2);i++){
            j=n-i+1;
            for(k=1;k<=m;k++){
                l=m-k+1;
                jump.push_back(make_pair(i,k));
                jump.push_back(make_pair(j,l));
            }
        }
        if(n&1){
           for(i=1,j=m;i<j;i++,j--){
               jump.push_back(make_pair((n+1)/2,i));
               jump.push_back(make_pair((n+1)/2,j));
           }
           if(i==j)
              jump.push_back(make_pair((n+1)/2,i));
        }
        for(i=0;i<jump.size();i++)
            printf("%d %d\n",jump[i].first,jump[i].second);
    }
