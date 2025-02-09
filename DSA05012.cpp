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

vector<vector<int>> C(MAXN, vector<int>(MAXN, 0));

void prepare()
{
    for (int n = 0; n < MAXN; ++n)
    {
        for (int k = 0; k <= n; ++k)
        {
            if (k == 0 || k == n)
                C[n][k] = 1;
            else
                C[n][k] = (C[n - 1][k - 1] + C[n - 1][k]) % MOD;
        }
    }
}
void hhtuann()
{
    int N, K;
    cin >> N >> K;

    cout << C[N][K] << endl;
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

    prepare();
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */