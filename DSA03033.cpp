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
    int W, c;
    cin >> W >> c;

    if (W % 1000)
    {
        cout << 0 << endl;
        return;
    }

    vector<vector<pair<int, int>>> a(16);
    vector<int> m = {5000, 3000, 2000, 1000};
    int cnt1 = 0, cnt2 = 1;

    for (int i = c; i >= 0; --i)
    {
        for (auto &x : m)
        {
            int cost = x * pow(10, i);
            a[i].emplace_back(cost, W / cost);
            cnt1 += W / cost;
            W %= cost;
        }
    }

    for (int i = 0, base = 1; i <= c; ++i, base *= 10)
    {
        int min1 = INT_MAX, min2 = INT_MAX;
        int n5 = 5000 * base, n3 = 3000 * base, n1 = 1000 * base;

        for (auto &x : a[i])
        {
            if (x.first == n5 || x.first == n1)
                min1 = min(min1, x.second);
            if (x.first == n3 || x.first == n1)
                min2 = min(min2, x.second);
        }

        cnt2 *= (min1 + min2 + 1);
    }

    cout << cnt1 << " " << cnt2 << endl;

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