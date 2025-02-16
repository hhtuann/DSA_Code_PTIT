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

struct Matrix
{
    int X[10][10];
    Matrix()
    {
        memset(X, 0, sizeof(X));
    }
    friend Matrix operator*(Matrix a, Matrix b)
    {
        Matrix c;
        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                c.X[i][j] = 0;
                for (int k = 0; k < 10; ++k)
                {
                    c.X[i][j] += a.X[i][k] * b.X[k][j];
                    c.X[i][j] %= MOD;
                }
            }
        }
        return c;
    }
    Matrix binpow(Matrix a, int n)
    {
        Matrix res;
        for (int i = 0; i < 10; ++i)
            res.X[i][i] = 1;
        while (n)
        {
            if (n & 1)
                res = res * a;
            a = a * a;
            n >>= 1;
        }
        return res;
    }
};
void hhtuann()
{
    int N, K;
    cin >> N >> K;

    Matrix a;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> a.X[i][j];

    a = a.binpow(a, K);
    int ans = 0;
    for (int i = 0; i < N; ++i)
        (ans += a.X[i][N - 1]) %= MOD;

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