#include <bits/stdc++.h>
using namespace std;

#ifdef HoangHoangTuan
#include <debug.h>
#else
#define debug(...) 12
#endif

#define endl '\n'
#define int long long

const int MAXN = 1e3 + 5;
const int MOD = 1e9 + 7;

int V, E;
vector<int> adj[MAXN];

void hhtuann()
{
    cin >> V >> E;

    memset(adj, 0, sizeof(adj));

    for (int i = 0; i < E; ++i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    for (int i = 1; i <= V; ++i)
    {
        cout << i << ": ";
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
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */