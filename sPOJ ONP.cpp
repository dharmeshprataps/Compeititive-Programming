#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string p="";
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]>=97 && s[i]<=122){
                p+=s[i];
                continue;
            }
            if(st.empty() || s[i]!=')'){
                st.push(s[i]);
            }
            else{
                while(st.top()!='('){
                    p+=st.top();
                    st.pop();
                }
                st.pop();
            }
        }
        cout<<p<<"\n";
    }


}
