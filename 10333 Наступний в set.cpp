#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;

using namespace std;

set<ll> _set;

ll p, result, lastResult, n;
char prevChar, c;

// Наступний в set

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        cin >> c >> p;
        if(c == '?')
        {
            auto iterat = _set.lower_bound(p);
            if(iterat == _set.end()) result = -1;
                else result  = *iterat;

            cout << result << endl;
            lastResult = result;
        }

        else
        {
            if(prevChar == '?')
                p = (p + lastResult) % 1000000000;
            _set.insert(p);
        }

        prevChar = c;
    }

    return 0;
}


