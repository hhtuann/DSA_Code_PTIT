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

int findKthDigit(int n, int k)
{
    int x = 1 << (n - 1);
    if (k == x)
        return n;
    if (k < x)
        return findKthDigit(n - 1, k);
    return findKthDigit(n - 1, k - x);
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

    int testcase = 1;
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */