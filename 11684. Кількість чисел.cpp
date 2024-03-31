#include <bits/stdc++.h>

#define ll long long
#define DIM 100009

using namespace std;

string a[DIM], b[DIM];
string s, s1;

int ind = -1;
bool p;

ll n, m, c, L,R, num, ans;
ll S[DIM], T[DIM];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1; i <= n+1; ++i)
    {
        ans += (i%10) % 998244353;
    }

    cout << ans;

    return 0;
}
