#include<bits/stdc++.h>
#define int long long
using namespace std;
unordered_map<char,int>pp;

int check(int b,string s){
    int ans=0;
    for(int i=s.length()-1,j=0;i>=0;i--,j++){
        ans=ans+pp[s[i]]*round(pow(b,j));
        //cout<<ans<<" "<<pp[s[i]]<<" "<<s[i]<<" "<<pow(b,j)<<"\n";
        if(ans>pow(10,12) || ans<0){
            return -1;
        }
    }
    return ans;

}
struct bs{
    int n;
    string s;
};
typedef struct bs bs;
bool b_s(string s,int q){
    int mni=-1;
    for(int i=0;i<s.length();i++){
            mni=max(mni,pp[s[i]]+1);
    }
    int l=mni-1;
    int h=36;
    while(h-l>1){
        int mid=l+(h-l)/2;
        int x=check(mid,s);
        if(x<0){
            return false;
        }
//        if(s=="1011101001100100010111001100"){
        //cout<<l<<" "<<h<<" "<<x<<"\n";
//        }
        if(x>q){
            h=mid;
        }
        else if(x<q){
            l=mid;
        }
        else{
            return true;
        }
    }
    //cout<<s<<"\n";
    return false;
}
main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    pp['0']=0;pp['1']=1;pp['2']=2;pp['3']=3;pp['4']=4;pp['5']=5;pp['6']=6;pp['7']=7;pp['8']=8;pp['9']=9;pp['A']=10;pp['B']=11;pp['C']=12;pp['D']=13;pp['E']=14;pp['F']=15;pp['G']=16;pp['H']=17;pp['I']=18;pp['J']=19;pp['K']=20;pp['L']=21;pp['M']=22;pp['N']=23;pp['O']=24;pp['P']=25;pp['Q']=26;pp['R']=27;pp['S']=28;pp['T']=29;pp['U']=30;pp['V']=31;pp['W']=32;pp['X']=33;pp['Y']=34;pp['Z']=35;
    //cout<<check(10,"111111");
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        bs b[n];
        int ff=0;
        unordered_set<int>s;
        unordered_set<int>q;
        for(int i=0;i<n;i++){
            cin>>b[i].n>>b[i].s;
            if(b[i].n!=-1){
                ff=1;
                q.insert(i);
                s.insert(check(b[i].n,b[i].s));
            }
        }
        if(ff){
            if(s.size()>1){
                cout<<-1<<"\n";
                continue;
            }
           // cout<<"alpha\n";
            int l=*(s.begin());
            int f=1;
            for(int j=0;j<n;j++){
                if(b[j].n!=-1)
                    continue;
                if(!b_s(b[j].s,l)){
                    f=0;
                    break;
                }
            }
            if(f){
                cout<<l<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
            continue;
        }
        int f1=0;
        int mni=-1;
        for(int i=0;i<b[0].s.length();i++){
            mni=max(mni,pp[b[0].s[i]]+1);
        }
        for(int i=mni;i<=36;i++){
            int l=check(i,b[0].s);
            //cout<<l<<"\n";
            int f=1;
            for(int j=1;j<n;j++){
                if(!b_s(b[j].s,l)){
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
