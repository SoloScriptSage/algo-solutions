#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

// 11514. Калорії 2

ll c, n, sum;
long long a[45];

int main(){
    cin >> n;

    for(int i = 0; i < n; ++i) cin >> a[i];

    sort(a, a+n);
    reverse(a, a + n);


    for(int i = 0; i < n; ++i)
        sum += pow(2, i) * a[i];

    cout << sum << endl;
    return 0;
}
