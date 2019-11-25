#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, tmp;
    scanf("%d", &n);
    queue<int>q, r;
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        if(tmp != 0)q.push(tmp);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        if(tmp != 0)r.push(tmp);
    }
    while(q.front() != r.front()){
        r.push(r.front());
        r.pop();
    }
    printf((q == r)?"YES":"NO");
    return 0;
}
