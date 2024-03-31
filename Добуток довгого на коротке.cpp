#include <bits/stdc++.h>

#define MAXDIGITS 10007

using namespace std;

int base = 10;

struct BigNum{
    int d[MAXDIGITS];                       // Масив числа якого будем сторить
    int len;                                // Довжина числа

    BigNum(){                               // Конструктор непонятний
    };

    void read(){
        memset(d, 0, sizeof(d));            // Забити пам'ять масиву нулями
                                            // Синтаксис memset(імя масиву, 0, сайз масиву)
        string s;                           // Імпровізований масив для темпорарі сторінга
        cin >> s;
        len = s.size();                     // Думаю понятно

        for(int i = 0; i < len; ++i) d[len-i-1] = s[i] - '0';
    }

    void print() {                          // Вивести ту всю бісовщину
        for(int i = len-1; i >= 0; --i)
            cout << d[i];
        cout << endl;
    }
};

BigNum operator + (const BigNum & a, const BigNum & b){
    BigNum res;
    res.len = max(a.len, b.len);         // Довжина суми буде максимальною з довжин доданків
    int per = 0;                            // Перенос

    for(int i = 0; i < res.len; i++)
    {
        res.d[i] = a.d[i] + b.d[i] + per;
        if(res.d[i] >= base)
            {
                per = 1;
                res.d[i] -= base;
            }
        else per = 0;
    }
    if(per > 0)
        res.d[res.len++] = per;

    return res;
}

BigNum operator * (const BigNum & a, const long long & b)
{
    BigNum r;
    r.len = a.len;

    int per = 0;
    for(int i = 0; i < r.len; ++i)
    {
        r.d[i] = a.d[i] * b + per;
        if(r.d[i] >= base)
        {
            per = r.d[i] / base;        // число для переносу дальше
            r.d[i] %= base;             // просто залишаємо число
        }else{
            per = 0;
        }
    }

    while(per > 0)
    {
        r.d[r.len++] = per % base;
        per /= 10;
    }

    while(r.len > 1 && r.d[r.len-1]==0)
        r.len--;

    return r;
}
int main(){
    BigNum a,c;



    a.read();

    long long b;
    cin >> b;

    c = a * b;

    c.print();

    return 0;
}
