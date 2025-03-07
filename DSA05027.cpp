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
    int N, W;
    cin >> N >> W;

    vector<int> w(N), v(N), dp(W + 1, 0);
    for (auto &x : w)
        cin >> x;
    for (auto &x : v)
        cin >> x;

    for (int i = 0; i < N; ++i)
        for (int j = W; j >= w[i]; --j)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

    cout << *max_element(dp.begin(), dp.end()) << endl;

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