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

    map<int, int> mp;
    for (int i = 0, x; i < N; ++i)
    {
        cin >> x;
        mp[x]++;
    }

    int ans = 0;
    for (auto &x : mp)
    {
        if (mp.count(K - x.first))
        {
            if (K - x.first == x.first)
                ans += x.second * (x.second - 1) / 2;
            else
            {
                ans += x.second * mp[K - x.first];
                mp.erase(K - x.first);
            }
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