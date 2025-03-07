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

    vector<pair<int, int>> a(N);
    for (auto &x : a)
        cin >> x.first;
    for (auto &x : a)
        cin >> x.second;

    sort(begin(a), end(a), [&](auto x, auto y)
         { if(x.second == y.second)
           return x.first < y.first;
       return x.second < y.second; });

    int ans = 0, last = 0;
    for (int i = 0; i < N; ++i)
    {
        if (a[i].first >= last)
        {
            ++ans;
            last = a[i].second;
        }
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