#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

stack<ll> s;

ll r[100007], a[100007], n;

int main()
{

    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    for(int i = 1; i <= n; ++i)
    {
        while(s.size() > 0 && a[s.top()] > a[i])
        {
            r[s.top()] = i;
            s.pop();
        }

        s.push(i);
    }

    while(s.size() > 0)
    {
        r[s.top()] = n + 1;
        s.pop();
    }

    for(int i = 1; i <= n; ++i) cout << r[i] << " ";

    return 0;
}
