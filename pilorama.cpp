#include <bits/stdc++.h>

#define endl '\n'
#define DIM 1007

const long long INF = 100000000000000;
typedef long long ll;

using namespace std;

string s;

ll d[DIM][DIM], arr[DIM], prefsum[DIM], n, l, c;

ll t;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> l >> n;

    for(int i = 1; i <= n; ++i) cin >> arr[i];


    arr[0] = 0;
    arr[n + 1] = l;


    for(int L = n + 1; L >= 0; --L){
        for(int R = L + 2; R <= n + 1; ++R)
        {
            c = INF;

            for(int k = L + 1; k < R; ++k)
                c = min(c, d[L][k] + d[k][R]);

            d[L][R] = c + arr[R] - arr[L];
        }
    }
        cout << d[0][n + 1];

    return 0;
}


