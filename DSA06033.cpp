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

    vector<int> a(N), sufMax(N);
    for (auto &x : a)
        cin >> x;

    sufMax[N - 1] = a[N - 1];
    for (int i = N - 2; i >= 0; --i)
        sufMax[i] = max(sufMax[i + 1], a[i]);

    int ans = -1;
    for (int i = 0; i < N; i++)
    {
        int pos = sufMax.rend() - upper_bound(sufMax.rbegin(), sufMax.rend(), a[i]) - 1;
        if (pos >= 0)
            ans = max(ans, pos - i);
    }

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