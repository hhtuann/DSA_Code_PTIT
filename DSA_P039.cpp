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
const int INF = 1e9 + 7;

void hhtuann()
{
    int N;
    cin >> N;

    vector<vector<int>> a(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];

    vector<int> dp(1 << N, INT_MIN);
    dp[0] = 0;

    for (int mask = 0; mask <= (1 << N); mask++)
    {
        for (int j = 0; j < N; j++)
        {
            int cnt = __builtin_popcount(mask);
            if (mask & (1 << j))
            {
                int old_mask = mask ^ (1 << j);
                dp[mask] = max(dp[mask], dp[old_mask] + a[cnt - 1][j]);
            }
        }
    }

    cout << dp[(1 << N) - 1] << endl;

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