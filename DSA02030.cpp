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
const int INF = 1e9 + 7;

int N, K, a[MAXN] = {1};

void Try(int i)
{
    if (i > K)
    {
        for (int j = 1; j <= K; ++j)
            cout << char('A' + a[j] - 1);
        cout << endl;
        return;
    }
    for (int j = a[i - 1]; j <= N; ++j)
    {
        a[i] = j;
        Try(i + 1);
    }
}
void hhtuann()
{
    char c;
    cin >> c >> K;

    N = c - 'A' + 1;
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
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */