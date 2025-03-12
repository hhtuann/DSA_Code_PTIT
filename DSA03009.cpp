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
    for (auto &[x, y] : a)
        cin >> x >> y >> x;

    sort(a.begin(), a.end(), greater<pair<int, int>>());

    int cnt = 0, profit = 0;
    vector<bool> check(N + 1, false);

    for (auto &[x, y] : a)
    {
        for (int j = min(N, y); j > 0; --j)
        {
            if (!check[j])
            {
                profit += x;
                ++cnt;
                check[j] = true;
                break;
            }
        }
    }

    cout << cnt << " " << profit << endl;

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