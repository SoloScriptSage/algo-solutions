#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;
typedef long double ld;
using namespace std;

string s;

ll n;
ll x[108], y[108];
ld d[108][108];

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> tests;

    for(int test = 0; test < tests; test++)
    {
        cin >> n >> m;

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                virus(i, j);
            }
        }
    }

    return 0;
}


