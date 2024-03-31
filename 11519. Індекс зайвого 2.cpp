#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;

using namespace std;

// 11519. Індекс зайвого 2

string s, r, r1, r2;
ll slen, k, jumpToleft, jumpToright, n, j;

int main(){
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> s;
        r = s;

        reverse(r.begin(), r.end());

        if(r == s) cout << -1;
        else{
            r = s;

            for(int j = 0; j < s.length(); j++){
                r.replace(j, 1, "");

                r1 = r;
                r2 = r;

                reverse(r2.begin(), r2.end());

                if(r1 == r2){
                    cout << j << endl;
                    break;
                }

                r = s;
            }
        }

    }

    return 0;
}
