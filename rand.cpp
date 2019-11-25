#include<bits/stdc++.h>
using namespace std;
# define intl long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    intl n;
    cin>>n;
    intl c[26]={0};
    string s;
    cin>>s;
    for(intl i=0;i<n;i++){
        c[int(s[i])-97]++;
    }
    for(int i=0;i<26;i++){
        for(intl j=0;j<c[i];j++){
            cout<<char(i+97);
        }
    }
}
