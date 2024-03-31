#include <bits/stdc++.h>

#define ll long long

ll n, ans, L,R;

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> L >> R;
        for(int j = L; j <= R; ++j)
        {
            if(j%10==2 || j%10==3 || j%10==9)
                ans++;
        }
        cout << ans << endl;
        ans = 0;
    }

    return 0;
}
