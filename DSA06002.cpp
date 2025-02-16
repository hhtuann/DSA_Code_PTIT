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
    int N, X;
    cin >> N >> X;

    vector<pair<int, int>> a(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i].second;
        a[i].first = i;
    }

    sort(a.begin(), a.end(), [&](auto x, auto y)
         {
        if(abs(x.second - X) == abs(y.second - X))
            return x.first < y.first;
        return abs(x.second - X) < abs(y.second - X); });

    for (auto &x : a)
        cout << x.second << ' ';

    cout << endl;

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