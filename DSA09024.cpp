#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

const int MAXN = 1e3 + 5;
const int INF = 1e9 + 7;

int v, e, u;
vector<int> adj[MAXN];
bool visited[MAXN];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        cout << x << " ";

        for (int y : adj[x])
            if (!visited[y])
            {
                q.push(y);
                visited[y] = 1;
            }
    }
}
void hhtuann()
{
    cin >> v >> e >> u;

    memset(adj, 0, sizeof(adj));
    memset(visited, 0, sizeof(visited));

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    BFS(u);
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