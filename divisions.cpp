#include <bits/stdc++.h>


#define endl '\n'

using namespace std;


typedef long long ll;

ll n, k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> k;

        if(k >= 1900) cout << "Division 1";
        else if(k >= 1600 && k <= 1899) cout << "Division 2";
        else if(k >= 1400 && k <= 1599) cout << "Division 3";
        else cout << "Division 4";

        cout << endl;
    }


    return 0;
}
