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

int N, a[MAXN];
bool visited[MAXN];

bool check()
{
    for (int i = 1; i < N; ++i)
        if (abs(a[i] - a[i + 1]) == 1)
            return false;
    return true;
}
void Try(int i)
{
    if (i > N)
    {
        if (check())
        {
            for (int j = 1; j <= N; ++j)
                cout << a[j];
            cout << endl;
        }
        return;
    }
    for (int j = 1; j <= N; ++j)
    {
        if (!visited[j])
        {
            visited[j] = true;
            a[i] = j;
            Try(i + 1);
            visited[j] = false;
        }
    }
}
void hhtuann()
{
    cin >> N;
    memset(visited, false, sizeof(visited));

    Try(1);

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