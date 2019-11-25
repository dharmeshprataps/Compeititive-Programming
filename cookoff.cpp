#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        set<long int>s;
        unordered_map<long int,long int>um;
        int f=0;
        for(int i=0;i<n;i++){cin>>a[i];um[a[i]]++;}
        for(auto i=um.begin();i!=um.end();i++){
            if((n-i->second)<i->second){
                cout<<"NO";
                f=1;
                break;
            }
            s.insert(i->first);
            //cout<<i->first<<" "<<i->second<<"\n";
        }
        if(f)
            continue;
        cout<<"YES\n";
        auto it1=s.begin();
        auto it2=s.begin();
        it2++;
        unordered_multimap<long int ,long int>um2;
        int s1=um[*it1];
        int s2=um[*it2];
        auto it4=it2;
        int f1=1;
        vector<pair<long int,long int>>v;
        while(it1!=s.end() && (f1 || it2!=it4)){
            //cout<<*it1<<" "<<*it2<<"\n";
            f1=0;
            if(s1==s2){
                um2.insert({*it1,*it2});
                it1++;
                it2++;
                if(it2==s.end())it2=s.begin();
                s1=um[*it1];
                s2=um[*it2];

                continue;
            }
            if(s1>s2){
                um.insert({*it1,*it2});
                it2++;
                if(it2==s.end())it2=s.begin();
                s2+=um[*it2];
            }
            if(s1<s2){
                um.insert({*it1,*it2});
                s2=s2-s1;
                it1++;
                if(it1==it2){
                    v.push_back({*it2,s2});
                    it2++;
                    if(it2==s.end())it2=s.begin();
                    s2=um[*it2];
                }
                s1=um[*it1];
            }
        }
        if(v.size()!=0){
            cout<<*it1<<" "<<s1<<"\n";
            auto it3=v.begin();
            s2=it3->second;
            while(it1!=s.end() && it3!=v.end()){
                if(s1==s2){
                    um2.insert({*it1,it3->first});
                    it1++;
                    it2++;
                    s1=um[*it1];
                    s2=it3->second;

                    continue;
                }
                if(s1>s2){
                    um.insert({*it1,it3->first});
                    it2++;
                    s2+=it3->second;
                }
                if(s1<s2){
                    um.insert({*it1,it3->first});
                    s2=s2-s1;
                    it1++;
                    s1=um[*it1];
                }
            }
        }
//        for(auto i=um2.begin();i!=um2.end();i++){
//            cout<<i->first<<" "<<i->second<<"\n";
//        }
        for(int i=0;i<n;i++){
            auto it=um2.find(a[i]);
            cout<<it->second<<" ";
            um[it->second]--;
            if(um[it->second]==0){
                um2.erase(it);
            }
        }
        cout<<"\n";
    }
}
