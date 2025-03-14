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

int V, E, u;
vector<vector<int>> adj(MAXN);
vector<bool> visited(MAXN);

void DFS(int x)
{
    cout << x << " ";
    visited[x] = 1;

    for (int y : adj[x])
    {
        if (!visited[y])
            DFS(y);
    }
}
void hhtuann()
{
    fill(adj.begin(), adj.end(), vector<int>());
    fill(visited.begin(), visited.end(), 0);

    cin >> V >> E >> u;

    for (int i = 0; i < E; ++i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    DFS(u);
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