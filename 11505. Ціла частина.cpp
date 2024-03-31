#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

// 11505. Ціла частина

string s;

int main(){
    cin >> s;

    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '.') break;
        else cout << s[i];
    }

    return 0;
}
