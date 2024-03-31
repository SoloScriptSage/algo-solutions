#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;

using namespace std;

ll a[3000], b[3000], c[3000], sum, n, first, second, x;

// 11526. Арифметична прогресія

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    for(int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }


    for(int i = 1; i <= n; i++)
    {
        first = a[i];
        second = b[i];
        for(int j = first; j <= second; ++j)
        {
            c[j]++;
        }
    }

    for(int i = 1; i <= 1000; i++)
    {
        if(c[i] == n)  x++;
    }

    cout << x;
    return 0;
}


