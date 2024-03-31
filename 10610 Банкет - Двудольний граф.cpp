#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;
typedef long double ld;
using namespace std;

string s;

ll n, er,ver,transitions,v1,v2;
ll x[108], y[108];
ld d[108][108];
ll com[107];

vector<int> a[107];

void dfs(int v, int c)
{
    com[v] = c;

    for(auto x : a[v])
    {
        if(com[x] == c) er =1;
        if(com[x] == 0) dfs(x, 3-c);
    }
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> ver >> transitions;

    for(int i = 1; i <= transitions; ++i)
    {
        cin >> v1 >> v2;

        a[v1].push_back(v2);
        a[v2].push_back(v1);
    }

    for(int i = 1; i <= ver; ++i)
        if(com[i]==0) dfs(i, 1);

    if(er == 1) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for(int i = 1; i <= ver; ++i)
            if(com[i] == 1) cout << i << " ";
        cout << endl;
    }

    return 0;
}


