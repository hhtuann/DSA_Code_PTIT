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

string minNum(int S, int D)
{
    string num;
    for (int i = 1; i <= D; ++i)
    {
        int x = max(1LL * (i == 1), S - 9 * (D - i));
        num += to_string(x);
        S -= x;
    }

    return num;
}
string maxNum(int S, int D)
{
    string num;
    for (int i = 1; i <= D; ++i)
    {
        int x = min(9LL, S);
        num += to_string(x);
        S -= x;
    }

    return num;
}
void hhtuann()
{
    int S, D;
    cin >> D >> S;

    if (S > 9 * D || S == 0)
    {
        cout << "-1 -1" << endl;
        return;
    }

    cout << minNum(S, D) << " " << maxNum(S, D) << endl;

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
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */