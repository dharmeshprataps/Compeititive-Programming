#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        unordered_map<int,int>um;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        deque<int>s;
        int i=0;
        deque<int>l;
        while(i<n){
            //cout<<i<<"\n";
            if(s.empty() || a[s.back()]<a[i]){
                if(!s.empty())
                    um[s.back()]=1;
                s.push_back(i++);
            }
            else{//cout<<i<<"p\n";
                if(s.size()>1){
                    deque<int>q;
                    while(!s.empty() && k){
                        if(!um[s.front()]){
                            q.push_back(s.front());
                            s.pop_front();
                        }
                        else{
                            s.pop_front();
                            k--;
                            if(k==0)
                                break;
                        }
                        //cout<<i<<"\n";
                    }

                    while(!q.empty()){
                        s.push_front(q.back());
                        q.pop_back();
                    }
                }
                if(k==0){
                    break;
                }
                s.push_back(i++);
            }
//            cout<<i<<"\n";
        }
        deque<int>q;
        while(!s.empty() && k){
            if(!um[s.front()]){
                q.push_back(s.front());
                s.pop_front();
            }
            else{
                s.pop_front();
                k--;
                if(k==0)
                    break;
            }
            //cout<<i<<"\n";
        }
        while(!q.empty()){
            s.push_front(q.back());
            q.pop_back();
        }
        deque<int>q1;
        while(!s.empty() && k){
            if(q1.empty() || a[q1.back()]>=a[s.front()]){
                q1.push_back(s.front());
                s.pop_front();
            }
            else{
                q1.pop_back();
                k--;
                if(k==0){
                    while(!s.empty()){
                        q1.push_back(s.front());
                        s.pop_front();
                    }
                    break;
                }
            }
        }
        while(!q1.empty()){
            s.push_back(q1.front());
            q1.pop_front();

        }
        int p=n-1;
        if(k){
            k--;
            p--;
        }
        while(!s.empty()){
            if(s.front()>p){
                break;
            }
            cout<<a[s.front()]<<" ";
            s.pop_front();
        }
        while(i<=p){
            cout<<a[i++]<<" ";
        }
        cout<<"\n";
    }
}
