//@@@@@@@@@@@@@@@@@@@@@@@@@@/@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@(@@%%/%&(@@(%@@@@@
//@@@@@@@@@@@@@@@@@@@@%&%@#&%@*,@*#*#/#&(@
//@@@@@@@@@@@@@@@@@@@&*@@@#//%#(#*/*( /. %
//@@@@@@@@@@@@@@@@@@@@(((((#,/(##(# */
//@@@@@@@@@@@@@@@@@@@@@@@#(/%(//#(##&(&
//@@@@@@@@@@@@@@@@@@@@*@%#%##***/#/###*.
//@@@@@@@@@@@@@@@@@@@@#(%(%##(%*%#(*#,#(/
//@@@@@@@@@@@@@@@@@@@%##&/%####%##  (#/#*(
//@@@@@@@@@@@@@@@@@@@@@@((//%#*(#((*(.#*@/
//@@@@@@@@@@@@@@@@@@@@@@@#@@#/%((#@&/*@*@#
//@@@@@@@@@@@@@@@@@@@@@@            @@@@@@
//@@@@@@@@@@@@@@@@@@@@@@            @@@@@@
//@@@@@@@@@@@@@@@@@@@@               @@@@@
//@@@@@@@@@@@@@@@@@.                  @@@@
//@@@@@@@@@@@@@@@                      @@@

#include <bits/stdc++.h>
#include <string>

#define endl '\n'
#define DIM 10009

typedef long long ll;
typedef long double ld;

using namespace std;

string s, str, path, str1, str2;
set<char> al;
pair<ll, ll> coord;

char c;

bool flag = false;

ll n;
ll num;
ll h;
ll aOC;
ll p;
ll maxi;
ll mN=-1;
ll mn=-1;
ll amount;
ll sum;
ll sum1;
ll sum2;
ll a[DIM], a1[DIM];

// sort by last num
/*
bool cmp(ll p1, ll p2){
    if(p1%10 == p2%10)
        return p1<p2;
    else return p1%10 < p2%10;
}
*/

//sort parnyh i neparnyh
/*
bool cmp(ll p1, ll p2){
    if(p1%2==0 && p2%2==0)
        return p1 > p2;
    else if(p1%2!=0 && p2%2!=0)
        return p1 < p2;
    else return p1%2!=0;
}
*/


struct Point()
{
    ll x, y;
};

bool cmp(Point p1, Point p2){
    if(p1.x == p2.x) return p1.y < p2.y;
    else return p1.x < p2.x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a+n, cmp);

    for(int i = 0; i < n; ++i)
        cout << a[i] << endl;

    return 0;
}


