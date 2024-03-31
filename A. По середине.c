#include <bits/stdc++.h>

using namespace std;


long long n, a, b, c, _n, kk, x;
long long arr[10008];
set <long long> s;

void main()
{

	  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	cin >> _n;

	for(int j = 0; j < _n; j++){
		cin >> n;
		for(int i = 0; i < n; ++i){
			cin >> a;
			s.insert(a);
		}
	}

	for(auto x : s) {
		cout << x << endl;
	}
}
