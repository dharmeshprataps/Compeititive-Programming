#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int mul;
    int i=0;
    unordered_map<char,int>um;
    um['C']=12;
    um['O']=16;
    um['H']=1;
    int f=1;
    stack<int>st;
    int ans=0;
    while(i<s.length()){
        if(s[i]=='C' || s[i]=='H' || s[i]=='O'){
            st.push(um[s[i]]);
        }
        else if(int(s[i])>=48 && int(s[i])<=57){
            int k=st.top();
            st.pop();
            st.push(k*(int(s[i])-48));
        }
        else if(s[i]=='('){
            st.push(-1);
        }
        else if(s[i]==')'){
            int k=0;
            while(st.top()!=-1){
                k+=st.top();
                st.pop();
            }
            st.pop();
            st.push(k);
        }
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    cout<<ans<<"\n";

}
