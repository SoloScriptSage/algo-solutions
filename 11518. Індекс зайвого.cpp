#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


// 11518. Індекс зайвого

ll c, n, sum;
long long a[45];
string s, l;
bool pal = true;

int main(){
    cin >> s;

    for(int i = 0; i < s.length(); ++i){
        if(s[i] != s[s.length() - i - 1]){
            pal = false;
            break;
        }
    }

    if(pal){
        cout << -1;
        return 0;
    }

    for(int i = 0; i < s.length(); i++){
        pal = true;

        l = s;
        l.erase(i, 1);

        for(int j = 0; j < l.length(); ++j){
            if(l[j] != l[l.length() - j - 1]){
                pal = false;
                break;
            }
        }

        if(pal == true){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
