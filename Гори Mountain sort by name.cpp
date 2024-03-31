#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;

using namespace std;

ll n;

struct Mountain{
    string Name;
    ll height;
};

// 11527. Гори

Mountain a[1008];

bool cmp(Mountain m1, Mountain m2){
    return m1.height > m2.height;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i].Name >> a[i].height;
    }

    sort(a, a+n, cmp);

    cout << a[1].Name << endl;

    return 0;
}


