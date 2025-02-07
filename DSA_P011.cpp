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

int N, M;
vector<string> a(MAXN);
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    while (!q.empty())
    {
        auto [u, v] = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int _x = u + dx[i];
            int _y = v + dy[i];
            if (_x >= 0 && _x < N && _y >= 0 && _y < M && a[_x][_y] == '#')
            {
                a[_x][_y] = '.';
                q.push({_x, _y});
            }
        }
    }
}
void hhtuann()
{
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
        cin >> a[i];

    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (a[i][j] == '#')
            {
                ans++;
                BFS(i, j);
            }
        }
    }

    cout << ans << endl;

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