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
const int INF = 1e9 + 7;

void hhtuann()
{
    int V, E;
    cin >> V >> E;

    vector<int> deg(V + 1);
    for (int i = 0; i < E; ++i)
    {
        int x, y;
        cin >> x >> y;
        ++deg[x];
        --deg[y];
    }

    for (int i = 1; i <= V; ++i)
    {
        if (deg[i] != 0)
        {
            cout << 0 << endl;
            return;
        }
    }

    cout << 1 << endl;

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