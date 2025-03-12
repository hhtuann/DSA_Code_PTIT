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

    sort(a.begin(), a.end());

    for (int x = a[0]; x >= 0; --x)
    {
        int ans = 0;
        for (int i = 0; i < N; ++i)
        {
            int bi = a[i] / (x + 1) + 1;
            if (a[i] / bi != x)
            {
                ans = 0;
                break;
            }
            ans += bi;
        }
        if (ans != 0)
        {
            cout << ans << endl;
            return;
        }
    }

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
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */