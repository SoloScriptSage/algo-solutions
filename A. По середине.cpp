#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c;
    int arr[1003];
    string s;
    string alphabet = "_abcdefghijklmnopqrstuvwxyz";

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int maxlowest = -1, maxhighest = -1, maxindex = -1;
    for(int i = 0; i < n; ++i)
    {
        cin >> a;

        for(int j = 0; j < a; ++j)
        {
            cin >> arr[j];
            if(maxhighest < arr[j]){
                maxhighest = arr[j];
                maxindex = j;
            }
        }

        for (int k = 0; k < a; k++)
        {
            if(k == maxindex){

                for(int j = 0; j < a; ++j){
                    if(j == maxindex) continue;
                    else maxlowest = max(maxlowest, arr[j]);
                }

                cout << maxhighest - maxlowest << " ";
            }

            else{
                cout << arr[k] - maxhighest << " ";
            }
        }
        cout << endl;

        maxhighest = -1; maxlowest = -1; maxindex = -1;
    }
    return 0;
}
