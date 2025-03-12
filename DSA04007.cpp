#include <bits/stdc++.h>
using namespace std;

#ifdef HoangHoangTuan
#include <debug.h>
#else
#define debug(...) 12
#endif

#define endl '\n'
#define int long long

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;

string a, b;
int base;

string operator+(string &num1, string &num2)
{
    while (num1.size() < num2.size())
        num1 = '0' + num1;
    while (num2.size() < num1.size())
        num2 = '0' + num2;

    int carry = 0;
    string result = "";

    for (int i = num1.size() - 1; i >= 0; i--)
    {
        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        carry = sum / base;
        sum %= base;
        result = char(sum + '0') + result;
    }

    if (carry != 0)
        result = to_string(carry) + result;

    return result;
}
void hhtuann()
{
    cin >> base >> a >> b;
    cout << a + b << endl;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    if (fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }

    int testcase = 1;
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */