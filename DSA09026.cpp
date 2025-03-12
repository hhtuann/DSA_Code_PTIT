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

int V, E, S, T;
vector<vector<int>> adj(MAXN);
vector<int> parent(MAXN);

void BFS()
{
    queue<int> q;
    q.push(S);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        if (u == T)
            return;

        for (auto v : adj[u])
        {
            if (parent[v] == -1)
            {
                parent[v] = u;
                q.push(v);
            }
        }
    }

    return;
}
void hhtuann()
{
    fill(parent.begin(), parent.end(), -1);
    fill(adj.begin(), adj.end(), vector<int>());

    cin >> V >> E >> S >> T;

    for (int i = 0, u, v; i < E; ++i)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }

    parent[S] = 0;
    BFS();

    if (parent[T] == -1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        vector<int> path;
        for (int v = T; v != S; v = parent[v])
            path.push_back(v);
        path.push_back(S);

        reverse(path.begin(), path.end());
        for (auto &x : path)
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