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

string toBinary(int n)
{
    string res = "";
    for (int i = n; i > 0; i /= 2)
    {
        if (i % 2)
            res += '1';
        else
            res += '0';
    }
    reverse(res.begin(), res.end());
    return res;
}
void hhtuann()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i)
        cout << toBinary(i) << " ";
    cout << endl;

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