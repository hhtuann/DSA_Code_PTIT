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
    int N;
    cin >> N;

    vector<int> a(N);
    for (auto &x : a)
        cin >> x;

    vector<int> dp1(N, 1), dp2(N, 1);
    for (int i = 1; i < N; ++i)
        if (a[i] > a[i - 1])
            dp1[i] = dp1[i - 1] + 1;
    for (int i = N - 2; i >= 0; --i)
        if (a[i] > a[i + 1])
            dp2[i] = dp2[i + 1] + 1;

    int ans = 0;
    for (int i = 0; i < N; ++i)
        ans = max(ans, dp1[i] + dp2[i] - 1);

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