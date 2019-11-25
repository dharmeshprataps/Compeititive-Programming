#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    int num[n]={0};
    unordered_map<int,int>w;
    unordered_map<int,vector<int>>w1;
    map<pair<char,int>,int>vow;
    map<pair<char,int>,vector<int>>vow1;
    for(int i=0;i<n;i++){
        cin>>s[i];
        char c1;
        for(int j=0;j<s[i].length();j++){
            if(s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='o' || s[i][j]=='i' || s[i][j]=='u'){
                num[i]++;
                c1=s[i][j];
            }
        }
        w[num[i]]++;
        w1[num[i]].push_back(i);
       // cout<<s[i]<<" "<<c1<<" "<<num[i]<<"\n";
        vow[{c1,num[i]}]++;
        vow1[{c1,num[i]}].push_back(i);
    }
    int tot=0;
    unordered_set<int>s12;
    vector<pair<int,int>>sec;
    vector<pair<int,int>>fir;
    for(auto i=vow.begin();i!=vow.end();i++){
        int x=i->second;
        if(x>=2){
            if(x%2==0){
                tot+=x;
                w[i->first.second]-=x;
                for(int j=0;j<vow1[i->first].size();j+=2){
                    sec.push_back({vow1[i->first][j],vow1[i->first][j+1]});
                    s12.insert(vow1[i->first][j]);
                    s12.insert(vow1[i->first][j+1]);
                }
            }
            else{
                tot+=(x-1);
                w[i->first.second]-=(x-1);
                for(int j=0;j<vow1[i->first].size()-1;j+=2){
                    sec.push_back({vow1[i->first][j],vow1[i->first][j+1]});
                    s12.insert(vow1[i->first][j]);
                    s12.insert(vow1[i->first][j+1]);
                }
            }
        }
    }
    int x=0;
    for(auto i=w.begin();i!=w.end();i++){
        if(i->second>=2){
            if(i->second%2==0){
                x+=i->second;
                vector<int>rema;
                for(int j=0;j<w1[i->first].size();j+=2){
                    if(s12.find(w1[i->first][j])==s12.end() && s12.find(w1[i->first][j+1])==s12.end())
                        fir.push_back({w1[i->first][j],w1[i->first][j+1]});
                    else if(s12.find(w1[i->first][j])==s12.end()){
                        rema.push_back(w1[i->first][j]);
                    }
                }
                if(rema.size()>=2){
                    for(int j=0;j<(rema.size()/2)*2;j+=2){
                        fir.push_back({rema[j],rema[j+1]});
                    }
                }
            }
            else{
                x+=(i->second-1);
                vector<int>rema;
                for(int j=0;j<w1[i->first].size()-1;j+=2){
                    if(s12.find(w1[i->first][j])==s12.end() && s12.find(w1[i->first][j+1])==s12.end())
                    fir.push_back({w1[i->first][j],w1[i->first][j+1]});
                    else if(s12.find(w1[i->first][j])==s12.end()){
                        rema.push_back(w1[i->first][j]);
                    }
                }
                if(rema.size()>=2){
                    for(int j=0;j<(rema.size()/2)*2;j+=2){
                        fir.push_back({rema[j],rema[j+1]});
                    }
                }
            }
        }
    }
    if(x>=tot){
        cout<<tot/2<<"\n";
        for(int i=0;i<tot/2;i++){
            cout<<s[fir[i].first]<<" "<<s[sec[i].first]<<"\n"<<s[fir[i].second]<<" "<<s[sec[i].second]<<"\n";
        }
        return 0;

    }
    else{cout<<(tot+x)/4<<"\n";
        for(int i=0;i<x/2;i++){
            cout<<s[fir[i].first]<<" "<<s[sec[i].first]<<"\n"<<s[fir[i].second]<<" "<<s[sec[i].second]<<"\n";
        }
        int j=(tot+x)/4;
        for(int i=x/2;i<(tot+x)/4;i++,j++){
            cout<<s[sec[j].first]<<" "<<s[sec[i].first]<<"\n"<<s[sec[j].second]<<" "<<s[sec[i].second]<<"\n";
        }

    }

}
