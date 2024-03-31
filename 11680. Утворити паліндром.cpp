#include <bits/stdc++.h>

#define ll long long
#define DIM 100009

using namespace std;

string a[DIM], b[DIM];
string s, s2, ans;

int ind = -1;
bool p;

ll n, m, c, L,R, num;
ll S[DIM], T[DIM];

bool pal(string s1){
    s2 = s1;

    reverse(s2.begin(), s2.end());

    if(s1==s2) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    n = s.length();

    if(pal(s)) {
            cout << "Yes";
            return 0;
        }

    for(int i = n-1; i >= 0; --i)
    {
        if(s[i]=='a')
            R++;
        else break;
    }

    for(int i = 0; i < n; ++i)
    {
        if(s[i]=='a')
            L++;
        else break;
    }

    if(L < R)
    {
        reverse(s.begin(), s.end());
        for(int i = 0; i < R - L; ++i) s.push_back('a');
        reverse(s.begin(), s.end());
        if(pal(s)) {
            cout << "Yes";
            return 0;
        }else cout << "No";
    }else cout << "No";

    return 0;
}
