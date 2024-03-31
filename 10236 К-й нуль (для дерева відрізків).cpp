#include <bits/stdc++.h>

#define endl '\n'
#define DIM 100009

typedef long long ll;
typedef long double ld;

using namespace std;

string s;

ll a[DIM], Tree[4*DIM];
ll n, l, r, res, k;

void buildTree(int v, int tl, int tr)
{
    if(tl == tr){
        if(a[tl] == 0) Tree[v] = 1;
        else Tree[v] = 0;
        return;
    }

    int tm = (tl + tr) / 2;

    buildTree(2*v+1, tl, tm);
    buildTree(2*v+2, tm+1, tr);

    Tree[v] = Tree[2*v+1] +
                    Tree[2*v+2];
}

long long inQuery(int v, int tl, int tr, int k)
{
    if(tl == tr) return tl;

    int tmiddle = (tl + tr) / 2;

    if(Tree[2*v + 1] >= k)
        return inQuery(2*v+1, tl, tmiddle, k);
    else return inQuery(2*v + 2, tmiddle+1, tr, k - Tree[2*v + 1]);
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];

    buildTree(0, 1, n);

    int am;
    cin >> am;

    for(int i = 1; i <= am; ++i)
    {
        cin >> k;

        if(Tree[0] < k) res = -1;
        else res = inQuery(0, 1, n, k);

        cout << res << " ";
    }

    return 0;
}


