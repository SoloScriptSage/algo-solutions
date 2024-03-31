#include <bits/stdc++.h>

#define endl '\n'
#define DIM 100009

typedef long long ll;
typedef long double ld;

using namespace std;

string s;

ll a[DIM], Tree[4*DIM];
ll n, l, r, res;

void buildTree(int v, int tl, int tr)
{
    if(tl == tr){
        Tree[v] = a[tl];
        return;
    }

    int tm = (tl + tr) / 2;

    buildTree(2*v+1, tl, tm);
    buildTree(2*v+2, tm+1, tr);

    Tree[v] = __gcd(Tree[2*v+1],
                    Tree[2*v+2]);
}

long long inQuery(int v, int tl, int tr, int L, int R)
{
    if(R < tl || tr < L) return 0;

    if(L <= tl && tr <= R) return Tree[v];
    int tmiddle = (tl + tr) / 2;


    return __gcd(inQuery(2*v+1, tl, tmiddle, L, R) , inQuery(2*v+2, tmiddle+1, tr, L, R));
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
        cin >> l >> r;

        cout << inQuery(0, 1, n, l, r) << " ";
    }
    return 0;
}


