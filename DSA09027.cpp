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

class DisjointSet
{
public:
    DisjointSet(int n) : n(n + 1), parent(n + 1)
    {
        for (int i = 1; i <= n; ++i)
            parent[i] = i;
    };
    int findSet(int u)
    {
        if (u == parent[u])
            return u;
        return findSet(parent[u]);
    }
    void unionSet(int u, int v)
    {
        u = findSet(u);
        v = findSet(v);
        if (u != v)
            parent[v] = u;
    }

private:
    vector<int> parent;
    int n;
};
void hhtuann()
{
    int N, M;
    cin >> N >> M;

    DisjointSet dsu(N);
    for (int i = 0, u, v; i < M; ++i)
    {
        cin >> u >> v;
        dsu.unionSet(u, v);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int u, v;
        cin >> u >> v;

        if (dsu.findSet(u) == dsu.findSet(v))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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