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
    int X[2][2];
    Matrix()
    {
        memset(X, 0, sizeof(X));
    }
    Matrix(vector<vector<int>> values)
    {
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j)
                X[i][j] = values[i][j];
    }
    friend Matrix operator*(Matrix a, Matrix b)
    {
        Matrix c;
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                c.X[i][j] = a.X[i][0] * b.X[0][j] + a.X[i][1] * b.X[1][j];
                c.X[i][j] %= MOD;
            }
        }
        return c;
    }
    Matrix binpow(Matrix a, int n)
    {
        Matrix res({{1, 0}, {0, 1}});
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
    int N;
    cin >> N;

    Matrix f({{1, 1},
              {1, 0}});
    f = f.binpow(f, N - 1);

    cout << f.X[0][0] << endl;

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