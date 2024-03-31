#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;

using namespace std;

string s;

ll res[102][102], n;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> s;
    n = s.size();

    for(int i = n; i >= 1; i--){
            res[i][i] = 1;
        for(int j = i + 1; j <= n; j++)
            if(s[i - 1] == s[j - 1])
                res[i][j] = res[i+1][j-1] + 2;
            else res[i][j] = max(res[i][j-1], res[i+1][j]);
    }

    cout << res[1][n];

    return 0;
}


