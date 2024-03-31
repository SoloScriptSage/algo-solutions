/*
██╗░░██╗██╗░░░██╗
██║░░██║██║░░░██║
███████║╚██╗░██╔╝
██╔══██║░╚████╔╝░
██║░░██║░░╚██╔╝░░
╚═╝░░╚═╝░░░╚═╝░░░
*/

#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

const int DIM = 2000007;
long long n, m, L, R, V;
long long a[DIM], d[DIM];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 1; i <= m; ++i){
        cin >> L >> R >> V;
        d[L] += V;
        d[R+1] -= V;
    }

    for(int i = 1; i <= n; ++i)
        a[i] = a[i-1] + d[i];

    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";

    return 0;
}
