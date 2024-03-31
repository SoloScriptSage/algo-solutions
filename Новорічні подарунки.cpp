#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
 //  Новорічні подарунки

typedef long long ll;
typedef pair<ll, ll> pll;

ll n, k, x, L, R, t1, t2, det_ind;
string s1, s2;

ll Used_Detail[307];
ll Indexes[307];

ll a[307];
ll b[307];
ll c[307];

vector<pll> pdi;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) cin >> b[i];

    for(int i = 1; i <= n; ++i)
    {
        pdi.push_back({a[i], i});
        pdi.push_back({b[i], -i});
    }

    sort(pdi.begin(), pdi.end());

    L = 1; R = n;

    for(auto x : pdi)
    {
        if(Used_Detail[abs(x.second)] == 1) continue;

        if(x.second > 0) Indexes[L++] = abs(x.second);
        else Indexes[R--] = abs(x.second);

        Used_Detail[abs(x.second)] = 1;

        if(L > R) break;
    }

    t1 = 0; t2 = 0;

    for(int i = 1; i <= n; ++i)
    {
        det_ind = Indexes[i];
        t1 += a[det_ind];
        t2 = max(t1, t2) + b[det_ind];
    }

    cout << t2 << endl;

    return 0;
}


