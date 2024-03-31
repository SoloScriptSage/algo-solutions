#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

// 11511. Утворити паліндром

string s;
ll slen, k, jumpToleft, jumpToright;

int main(){
    cin >> s;

    slen = s.length() - 1;

    for(int i = 0; i < s.length(); ++i){
        if(s[i] != '0'){
            jumpToleft = i;
            break;
        }
    }



    for(int i = slen; i >= 0; --i){
        if(s[i] != '0'){
                jumpToright = i;
            break;

        }
    }

    bool pal = true;


    for(int i = jumpToleft; i <= jumpToright; ++i){
        if(s[i] != s[jumpToright - k]){
            pal = false;
            break;
        }
        k++;
    }

    if(pal) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
