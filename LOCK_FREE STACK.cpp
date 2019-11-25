//============================================================================
// Name        : TEST.cpp
// Author      : Suhas
// Version     :
// Copyright   : Your copyright notice
// Description : C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n",x)
#define mp make_pair
#define pb push_back
#define fr first
#define se second

ll n,z;
vector<ll> v[1000007],a;
bool ok=false;

void func(ll index)
    {
    if(ok || index==z)
        {
        ok=true;
        return;
    }
    ll i,x;
    for(i=0;i<n;i++)
        {
        if(v[i].back()==a[index])
            {
            x=v[i].back();
            v[i].pop_back();
            func(index+1);
            v[i].pb(x);
        }
    }
}

int main()
    {
    ll t,i,j,x,y;
    sll(t);
    while(t--)
        {
        z=0;
        a.clear();
        sll(n);
        for(i=0;i<n;i++)
            {
            sll(x);
            z+=x;
            for(j=0;j<x;j++)
                {
                sll(y);
                v[i].pb(y);
            }
        }
        for(i=0;i<z;i++)
            {
            sll(x);
            a.pb(x);
        }
        ok=false;
        func(0);
        if(ok)
            {
            cout << "Yes" << endl;
        }
        else
            {
            cout << "No" << endl;
        }
        for(i=0;i<n;i++)
            {
            v[i].clear();
        }
    }
    return 0;
}
