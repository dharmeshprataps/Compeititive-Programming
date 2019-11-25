


        #include<bits/stdc++.h>
        using namespace std;
        long long int arr[100000][3];
        long long int dup(long long int a[][3],int n,int flag){
            if(n<=0){
                return 0;
            }

            long long int mn=INT_MAX;
            if(flag==0){
                if(a[n][1]){
                    if(arr[n-1][1]==0)arr[n-1][1]=dup(a,n-1,1);
                    mn=min(mn,arr[n-1][1]);
                }
                if(a[n][2]){
                    if(arr[n-1][2]==0)arr[n-1][2]=dup(a,n-1,2);
                    mn=min(mn,1+arr[n-1][2]);
                }
            }
            if(flag==1){
                if(a[n][0]){
                    if(arr[n-1][0]==0)arr[n-1][0]=dup(a,n-1,0);
                    mn=min(mn,dup(a,n-1,0));
                }
                if(a[n][2]){
                    if(arr[n-1][2]==0)arr[n-1][2]=dup(a,n-1,2);
                    mn=min(mn,1+arr[n-1][2]);
                }
            }
            if(flag==2){
                if(a[n][0]){
                    if(arr[n-1][0]==0)arr[n-1][0]=dup(a,n-1,0);
                    mn=min(mn,dup(a,n-1,0));
                }
                if(a[n][2]){
                    if(arr[n-1][2]==0)arr[n-1][2]=dup(a,n-1,2);
                    mn=min(mn,1+arr[n-1][2]);
                }
                if(a[n][1]){
                    if(arr[n-1][1]==0)arr[n-1][1]=dup(a,n-1,1);
                    mn=min(mn,arr[n-1][1]);
                }
            }
           // cout<<n<<" "<<flag<<" "<<mn<<"\n";

        //    cout<<n<<" "<<flag<<" "<<mn<<" "<<a[n][flag]<<"\n";

            return mn;
        }
        int main(){
            int n;cin>>n;
            long long int a[n+1][3];//col 0 academy col 1 driving col 2 rest;
            for(int i=0;i<100000;i++){
                arr[i][1]=0;
                arr[i][0]=0;
            }
            for(int i=1;i<=n;i++){
                int a1;
                cin>>a1;
                if(a1==0){
                    a[i][0]=0;
                    a[i][1]=0;
                    a[i][2]=1;
                }
                else if(a1==1){
                    a[i][0]=1;
                    a[i][1]=0;
                    a[i][2]=1;
                }
                else if(a1==2){
                    a[i][0]=0;
                    a[i][1]=1;
                    a[i][2]=1;
                }
                else if(a1==3){
                    a[i][0]=1;
                    a[i][1]=1;
                    a[i][2]=1;
                }
            }
        //    for(int i=0;i<n;i++){
        //        cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<"\n";
        //    }
            cout<<dup(a,n,2);

        }

