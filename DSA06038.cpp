#include <bits/stdc++.h>
using namespace std;

#ifdef HoangHoangTuan
#include <debug.h>
#else
#define debug(...) 12
#endif

#define endl '\n'
#define int long long

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

class FenwickTree
{
public:
    FenwickTree(int _n) : n(_n), bit(_n + 1, 0) {};
    void update(int idx, int val)
    {
        for (int i = idx; i <= n; i += i & -i)
            bit[i] += val;
    }
    int get(int idx)
    {
        int res = 0;
        for (int i = idx; i > 0; i -= i & -i)
            res += bit[i];
        return res;
    }

private:
    vector<int> bit;
    int n;
};
void hhtuann()
{
    int N;
    cin >> N;

    vector<int> a(N);
    vector<pair<int, int>> queries;
    int oddIdx = -1;
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
        if (a[i] & 1)
            oddIdx = i;
        else if (oddIdx != -1)
            queries.emplace_back(oddIdx, a[i]);
    }

    FenwickTree fen(MAXN);
    int cur = 0, res = 0;

    for (auto &query : queries)
    {
        while (cur < query.first)
        {
            debug(a[cur]);
            fen.update(a[cur], 1);
            ++cur;
        }
        cur = query.first + 1;
        res += fen.get(MAXN) - fen.get(query.second);
    }

    cout << res << endl;

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