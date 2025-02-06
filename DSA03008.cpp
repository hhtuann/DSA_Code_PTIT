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

    vector<pair<int, int>> a(N);
    for (auto &x : a)
        cin >> x.first;
    for (auto &x : a)
        cin >> x.second;

    sort(a.begin(), a.end(), [&](auto x, auto y)
         { return x.second < y.second; });

    vector<int> dp(N, 1);
    for (int i = 1; i < N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (a[i].first >= a[j].second)
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

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