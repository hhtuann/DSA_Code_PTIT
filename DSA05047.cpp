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

vector<int> masks = {0, 1, 2, 4, 5, 8, 9, 10};

void hhtuann()
{
    int N, ans = INT_MIN;
    cin >> N;

    vector<vector<int>> a(5, vector<int>(N + 1));
    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            cin >> a[i][j];
            ans = max(ans, a[i][j]);
        }
    }

    if (ans < 0)
    {
        cout << ans << endl;
        return;
    }

    vector<vector<int>> dp(16, vector<int>(N + 1, INT_MIN));
    dp[0][0] = 0;

    for (int j = 1; j <= N; ++j)
    {
        for (auto &mask : masks)
        {
            int curSum = 0;
            for (int i = 1; i <= 4; i++)
                if (mask & (1 << (i - 1)))
                    curSum += a[i][j];

            for (auto &prevMask : masks)
                if ((mask & prevMask) == 0)
                    dp[mask][j] = max(dp[mask][j], dp[prevMask][j - 1] + curSum);
        }
    }

    ans = INT_MIN;
    for (auto &mask : masks)
        ans = max(ans, dp[mask][N]);

    cout << ans << endl;

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