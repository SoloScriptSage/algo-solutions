#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;

using namespace std;

ll sum, n, t, m, p;
long long a[10000];

// Підпроекти

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; ++i){
        sum = 0;
        cin >> t >> p;

        for(int j = 0; j < p; ++j){
            cin >> a[j];
        }

        sort(a, a+p);
        reverse(a, a+p);

        if(t > p) t = p;

        for(int j = 0; j < t; ++j) sum += a[j];

        cout << sum << endl;
    }

    return 0;
}
