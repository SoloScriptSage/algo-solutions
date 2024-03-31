#include <bits/stdc++.h>

#define MAXDIGITS 10007

using namespace std;

int base = 10;

struct BigNum{
    int d[MAXDIGITS];                       // ����� ����� ����� ����� �������
    int len;                                // ������� �����

    BigNum(){                               // ����������� ����������
    };

    void read(){
        memset(d, 0, sizeof(d));            // ������ ���'��� ������ ������
                                            // ��������� memset(��� ������, 0, ���� ������)

        string s;                           // ������������� ����� ��� �������� �������
        cin >> s;
        len = s.size();                     // ����� �������

        for(int i = 0; i < len; ++i) d[len-i-1] = s[i] - '0';
    }

    void print() {                          // ������� �� ��� ��������
        for(int i = len-1; i >= 0; --i)
            cout << d[i];
        cout << endl;
    }
};

BigNum operator + (const BigNum & a, const BigNum & b){
    BigNum res;
    res.len = max(a.len, b.len);         // ������� ���� ���� ������������ � ������ �������
    int per = 0;                            // �������

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

int main(){
    BigNum a,b,c;

    a.read();
    b.read();

    c = a + b;

    c.print();

    return 0;
}
