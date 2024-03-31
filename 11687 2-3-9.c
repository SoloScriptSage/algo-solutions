#include <bits/stdc++.h>

#define ll long long

ll ans;

using namespace std;

int main(){
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> L >> R;
        for(int j = L; j <= R; ++j)
        {
            if(j%10==2 || j%10==3 || j%10==9)
                ans++;
        }
    }

    cout << ans;

    return 0;
}
