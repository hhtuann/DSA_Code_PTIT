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

int Fibo[100];

void prepare()
{
    Fibo[1] = 1;
    Fibo[2] = 1;
    for (int i = 3; i <= 92; ++i)
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
}
char findKthDigit(int n, int k)
{
    if (n == 1)
        return '0';
    if (n == 2)
        return '1';
    if (k <= Fibo[n - 2])
        return findKthDigit(n - 2, k);
    return findKthDigit(n - 1, k - Fibo[n - 2]);
}
void hhtuann()
{
    int N, K;
    cin >> N >> K;

    cout << findKthDigit(N, K) << endl;

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