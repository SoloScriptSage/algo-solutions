#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

// 11517. Сума великих

ll c, sum, a;

int main(){
    cin >> c;

    for(int i = 0; i < c; ++i){
        cin >> a;
        sum += a;
    }

    cout << sum;
    return 0;
}
