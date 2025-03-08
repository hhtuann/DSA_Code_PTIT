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

    vector<vector<int>> a(N + 1, vector<int>(N + 1, 0));
    vector<vector<int>> adj(N + 1);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> a[i][j];
            if (a[i][j])
                adj[i].emplace_back(j);
        }
    }

    for (int i = 1; i <= N; i++)
    {
        for (auto &x : adj[i])
            cout << x << " ";
        cout << endl;
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