#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;
typedef long double ld;
using namespace std;

string s;

ll n, er,ver,transitions,v1,v2,t, ind_s1, ind_s2,words, amount_letters, sum,kol;
ll x[108], y[108];
ld d[108][108];
ll com[107];

ll mini = 10000000;

string alphabet = "_abcdefghijklmnopqrstuvwxyz";
string a[107];
string s1,s2;


int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> t;


    for(int p = 0; p < t; ++p)
    {
        cin >> words >> amount_letters;

        for(int word = 0; word < words; ++word)
            cin >> a[word];


        for(int i = 0; i < words; ++i)
        {
            kol = i+1;
            for(int j = kol; j < words; ++j)
            {
                s1 = a[i];
                s2 = a[j];

                for(int k = 0; k < amount_letters; ++k)
                {
                    ind_s1 = alphabet.find(s1[k]);
                    ind_s2 = alphabet.find(s2[k]);

                    if(ind_s2 < ind_s1) swap(ind_s1, ind_s2);

                    sum += ind_s2 - ind_s1;
                }

                if(mini > sum)
                    mini = sum;

                sum = 0;
            }
        }

        cout << mini << endl;
        mini = 100000;
    }


    return 0;
}


