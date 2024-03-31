#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;
typedef long double ld;
using namespace std;

ll n, min_l[100009], min_r[100009], c[100009], m;
stack<ll> s;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> c[i];

    for(int i = 1; i <= n; ++i) min_l[i] = 0;

    for(int i = n; i >= 1; --i)
    {
        while(!s.empty() && c[s.top()] > c[i])
        {
            min_l[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while(s.size() > 0) s.pop();

    for(int i = 1; i <= n; ++i) min_r[i] = n+1;

    for(int i = 1; i <= n; ++i)
    {
        while(!s.empty() && c[s.top()] > c[i]){
            min_r[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    m = -10;
    for(int i = 1; i <= n; ++i)
    {
        if( (min_r[i] - min_l[i] - 1) * c[i] > m)
            m = (min_r[i] - min_l[i] - 1) * c[i];
    }

    cout << m << endl;


    return 0;
}


