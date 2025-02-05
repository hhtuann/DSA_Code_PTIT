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

int N, a[MAXN][MAXN];
bool isOK;

void DFS(int x, int y, string s)
{
    if (x >= N || y >= N || x < 0 || y < 0)
        return;
    if (a[x][y] == 0)
        return;
    if (x == N - 1 && y == N - 1)
    {
        cout << s << " ";
        isOK = true;
        return;
    }
    DFS(x + 1, y, s + 'D');
    DFS(x, y + 1, s + 'R');
}
void hhtuann()
{
    cin >> N;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> a[i][j];

    isOK = false;
    DFS(0, 0, "");

    if (!isOK)
        cout << -1;

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