#include <bits/stdc++.h>

#define ll long long
#define DIM 1000009

ll n, ans, L,R, num;
ll a[DIM], b[DIM];

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    a[0] = 0;
    a[n+1] = 360;

    for(int i = 1; i <= n; ++i){
        cin >> num;

        if(a[i-1]+num < 360) a[i] = a[i-1] + num;
        else if(a[i-1]+num>360) a[i]= num - (360 - a[i-1]);
        else a[i] = 0;
    }

    sort(a+1, a+n+1);

    for(int i = 1; i <= n+1; ++i)
    {
        ans = max(a[i]-a[i-1],ans);
    }

    cout << ans;

    return 0;
}
