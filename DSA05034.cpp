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
    int N, K;
    cin >> N >> K;

    vector<int> dp(N + 1, 0), prefix(N + 1, 0);
    dp[0] = prefix[0] = 1;

    for (int i = 1; i <= N; ++i)
    {
        int j = i - K;
        if (j <= 0)
            dp[i] += prefix[i - 1];
        else
            dp[i] += prefix[i - 1] - prefix[j - 1] + MOD;

        dp[i] %= MOD;
        (prefix[i] = prefix[i - 1] + dp[i]) %= MOD;
    }

    cout << dp[N] << endl;

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