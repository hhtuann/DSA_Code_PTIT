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
    int N, S = 0;
    cin >> N;

    vector<int> a(N);
    for (auto &x : a)
    {
        cin >> x;
        S += x;
    }

    if (S & 1)
    {
        cout << "NO" << endl;
        return;
    }

    S = S / 2;
    vector<bool> dp(S + 1, 0);
    dp[0] = true;

    for (int i = 0; i < N; ++i)
    {
        for (int j = S; j >= a[i]; --j)
        {
            if (dp[j - a[i]])
                dp[j] = true;
        }
    }

    if (dp[S])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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