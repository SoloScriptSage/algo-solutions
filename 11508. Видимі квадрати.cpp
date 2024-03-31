#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

// 11508. Видимі квадрати

ll n, m, starti, startj, counter, c;

char u;
ll a[108][108];

int main(){
    cin >> n >> m >> starti >> startj;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> u;
            if(u == '#') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }

    counter = 1;

    ll point1j = startj-1;
    ll point2j = startj+1;

    ll point1i = starti-1;
    ll point2i = starti+1;

    while(c != 4){
        for(int j = point1j; j > 0; --j){
            if(a[starti][j] == 1) break;
            if(a[starti][j] == 0) counter++;
        }
        c++;
        for(int j = point2j; j <= m; ++j){
            if(a[starti][j] == 1) break;
            if(a[starti][j] == 0) counter++;
        }
        c++;
        for(int i = point1i; i > 0; --i){
            if(a[i][startj] == 1) break;
            if(a[i][startj] == 0) counter++;
        }
        c++;
        for(int i = point2i; i <= n; i++){
            if(a[i][startj] == 1) break;
            if(a[i][startj] == 0) counter++;
        }
        c++;
    }

    cout << counter;



    return 0;
}
