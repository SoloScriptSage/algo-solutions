#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll sum, n;
long long ar[108];

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> ar[i];

    sort(ar, ar+n);

    reverse(ar, ar+n);

    for(int i = 0; i < n; ++i)
        if(ar[i] > i) sum += ar[i] - i;

    cout << sum << endl;
    return 0;
}
