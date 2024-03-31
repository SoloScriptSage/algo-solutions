#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct segm
{
    ll L, R;
};

bool cmp(segm s1, segm s2)
{
    if(s1.R == s2.R) return s1.L > s2.L;
    else return s1.R < s2.R;
}

segm a[100009];
ll n, res, ln;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i].L >> a[i].R;
    }

    sort(a, a+n, cmp);

    res = 1;
    ln = a[0].R;
    for(int i = 1; i < n; ++i)
    {
        if(a[i].L >= ln)
        {
            res++;
            ln = a[i].R;
        }
    }

    cout << res << endl;


    return 0;
}
