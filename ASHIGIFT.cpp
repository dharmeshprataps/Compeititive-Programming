
#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int b;
        cin>>b;
        int brr[b];
        int yrr[b];
        int h=0;
        for(int i=0;i<b;i++){cin>>brr[i]>>yrr[i];h+=yrr[i];}
        int c;
        cin>>c;
        int crr[c][3];
        for(int i=0;i<c;i++)cin>>crr[i][0]>>crr[i][1]>>crr[i][2];
        int l=0;
        h++;
        while(l<h){
            int mid=(l+h)/2;
            int cp=0;
            int ans=mid;
            int f=0;
            int i=0;
            while(i<b && cp<c){
                if(brr[i]<crr[cp][0]){
                    mid-=yrr[i];
                    if(mid<=0){
                        f=1;
                        break;
                    }
                    i++;
                }
                else{
                    if(crr[cp][1]<=mid)
                        mid+=crr[cp][2];
                    cp++;
                }
            }
            while(i<b){
                mid-=yrr[i];
                i++;
                if(mid<=0){
                    f=1;
                    break;
                }
            }
            if(f){
                l=ans+1;
            }
            else{
                h=ans;
            }
        }
        int i=0,cb=0,f=0;
        int ans=h;
        cout<<ans+f<<"\n";

    }
}
