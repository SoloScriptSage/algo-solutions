#include <bits/stdc++.h>

#define ll long long
#define DIM 100009

using namespace std;

int t, l, r, k, n, q,sum;
int a[DIM], prefixSum[DIM];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> n >> q;
        prefixSum[0]=0;
        for(int j = 1; j <= n; ++j){
            cin >> a[j];
            prefixSum[j] = prefixSum[j-1] + a[j];
        }
        for(int j = 0; j < q; ++j){
            cin >> l >> r >> k;

            if((prefixSum[n]-(prefixSum[r]-prefixSum[l-1])+(r-l+1)*k)%2 !=0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}
