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

int cost[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void hhtuann()
{
    int N;
    cin >> N;

    int ans = 0;
    for (int i = 9; i >= 0; --i)
    {
        ans += N / cost[i];
        N %= cost[i];
        if (N == 0)
            break;
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
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */