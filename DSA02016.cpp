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

int N, ans, a[MAXN];
bool row[MAXN], diag1[2 * MAXN], diag2[2 * MAXN];

void Try(int i)
{
    if (i > N)
    {
        ++ans;
        return;
    }
    for (int j = 1; j <= N; ++j)
    {
        if (row[j] || diag1[N - i + j] || diag2[i + j - 1])
            continue;
        row[j] = diag1[N - i + j] = diag2[i + j - 1] = true;
        a[i] = j;
        Try(i + 1);
        row[j] = diag1[N - i + j] = diag2[i + j - 1] = false;
    }
}
void hhtuann()
{
    memset(row, 0, sizeof(row));
    memset(diag1, 0, sizeof(diag1));
    memset(diag2, 0, sizeof(diag2));

    cin >> N;

    ans = 0;
    Try(1);
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
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */