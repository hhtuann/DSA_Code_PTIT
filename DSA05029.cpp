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
    string S;
    cin >> S;

    if (S[0] == '0')
    {
        cout << 0 << endl;
        return;
    }

    int N = S.size();
    vector<int> dp(N + 1);
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= N; ++i)
    {
        if (S[i - 1] > '0')
            dp[i] = dp[i - 1];
        if (S[i - 2] == '1' || (S[i - 2] == '2' && S[i - 1] <= '6'))
            dp[i] += dp[i - 2];
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