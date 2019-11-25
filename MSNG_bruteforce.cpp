#include<bits/stdc++.h>
#define int long long
using namespace std;
unordered_map<char,int>pp;
int check(int b,string s){
    int ans=0;
    for(int i=s.length()-1,j=0;i>=0;i--,j++){
        if(pow(b,j)>pow(10,12) || pow(b,j)<-1 || ans+round(pow(b,j))>round(pow(10,12)) || ans+round(pow(b,j))<-1){
            return -1;
        }
        ans+=pp[s[i]]*round(pow(b,j));
     //   cout<<ans<<" "<<pp[s[i]]<<" "<<s[i]<<" "<<round(pow(b,j))<<"\n";
    }
    int al=round(pow(10,12));
    if(ans<=al)
    return ans;
    return -1;
}
struct bs{
    int fi;
    string se;
};
int chek(){

    string s="GDFGDDHJ";
   // cout<<check(2,s)<<"\n";
    for(int i=20;i<=36;i++){
        cout<<(check(i,s))-round(pow(10,12))<<"\n";
    }
}
bool b_s(string s,int q){
    int mni=2;
    for(int i=0;i<s.length();i++){
            mni=max(mni,pp[s[i]]+1);
    }
    int l=mni;
    int h=36;
    while(h>=l){
        int mid=l+(h-l)/2;
        int x=check(mid,s);
       // cout<<mid<<" "<<s<<" "<<x<<"\n";
        if(x<0){
            h=mid-1;
        }
        else if(x>q){
            h=mid-1;
        }
        else if(x<q){
            l=mid+1;
        }
        else{
            return true;
        }
    }
   // cout<<s<<"\n";
    return false;
}
main(){
    pp['0']=0;pp['1']=1;pp['2']=2;pp['3']=3;pp['4']=4;pp['5']=5;pp['6']=6;pp['7']=7;pp['8']=8;pp['9']=9;pp['A']=10;pp['B']=11;pp['C']=12;pp['D']=13;pp['E']=14;pp['F']=15;pp['G']=16;pp['H']=17;pp['I']=18;
    pp['J']=19;pp['K']=20;pp['L']=21;pp['M']=22;pp['N']=23;pp['O']=24;pp['P']=25;pp['Q']=26;pp['R']=27;pp['S']=28;pp['T']=29;pp['U']=30;pp['V']=31;pp['W']=32;pp['X']=33;pp['Y']=34;pp['Z']=35;
    cout<<setprecision(18);//chek();
    int t=0;cin>>t;
    while(t--){
        int n;cin>>n;
        unordered_set<int>s;
        bs v[n];
        for(int i=0;i<n;i++){
            cin>>v[i].fi>>v[i].se;
            if(v[i].fi!=-1){
                s.insert(check(v[i].fi,v[i].se));
            }
        }
        if(s.size()>0){
            if(s.size()>1){
                cout<<-1<<"\n";
                continue;
            }
            int ff=1;
            int l=*(s.begin());
            for(int i=0;i<n;i++){
                if(v[i].fi!=-1){
                    continue;
                }
                int f=1;
                int mni=2;
                if(!b_s(v[i].se,l)){
                    cout<<-1<<"\n";
                    ff=0;
                    break;
                }
            }
            if(ff){
                cout<<l<<"\n";
            }
        }
        else{
            int f1=0;
            int mni=2;
            for(int i=0;i<v[0].se.length();i++){
                mni=max(mni,pp[v[0].se[i]]+1);
            }
            for(int i=mni;i<=36;i++){
                int l=check(i,v[0].se);
                int f=1;
                for(int j=1;j<n;j++){
                    if(!b_s(v[j].se,l)){
                        f=0;
                        break;
                    }
                }
                if(f){
                    f1=1;
                    cout<<l<<"\n";
                    break;
                }
            }
            if(!f1){
                cout<<-1<<"\n";
            }
        }
    }
}
