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

void hhtuann()
{
    int S, D;
    cin >> S >> D;

    if (S > 9 * D)
    {
        cout << -1 << endl;
        return;
    }

    string num;
    for (int i = 1; i <= D; ++i)
    {
        int x = max(1LL * (i == 1), S - 9 * (D - i));
        num += to_string(x);
        S -= x;
    }

    cout << num << endl;

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