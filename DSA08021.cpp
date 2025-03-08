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

int M, N;
vector<vector<int>> a(MAXN, vector<int>(MAXN, 0));

void hhtuann()
{
    cin >> M >> N;

    for (int i = 1; i <= M; ++i)
        for (int j = 1; j <= N; ++j)
            cin >> a[i][j];

    queue<pair<int, int>> q;
    vector<vector<int>> step(M + 1, vector<int>(N + 1, INT_MAX));
    q.push({1, 1});
    step[1][1] = 0;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        if (x + a[x][y] <= M && step[x + a[x][y]][y] > step[x][y] + 1)
        {
            q.push({x + a[x][y], y});
            step[x + a[x][y]][y] = step[x][y] + 1;
        }

        if (y + a[x][y] <= N && step[x][y + a[x][y]] > step[x][y] + 1)
        {
            q.push({x, y + a[x][y]});
            step[x][y + a[x][y]] = step[x][y] + 1;
        }
    }

    if (step[M][N] == 0)
        cout << -1 << endl;
    else
        cout << step[M][N] << endl;

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