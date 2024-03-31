#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;
typedef long double ld;
using namespace std;

ll n, min_l[100009], min_r[100009], c[100009], m,bw,res, highest;
stack<ll> s;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> m;

    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            cin >> bw;
            if(bw == 0) c[j]++;
            else c[j] = 0;
        }

        for(int i = 1; i <= m; ++i) min_l[i] = 0;

        for(int i = m; i >= 1; --i)
        {
            while(!s.empty() && c[s.top()] > c[i])
            {
                min_l[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }

        while(s.size() > 0) s.pop();

        for(int i = 1; i <= m; ++i) min_r[i] = m+1;

        for(int i = 1; i <= m; ++i)
        {
            while(!s.empty() && c[s.top()] > c[i]){
                min_r[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }

        res = -1;
        for(int i = 1; i <= m; ++i)
        {
            if( (min_r[i] - min_l[i] - 1) * c[i] > res)
               res  = (min_r[i] - min_l[i] - 1) * c[i];
        }

        if(res > highest) highest = res;
    }

    cout << highest << endl;



    return 0;
}


