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

int binpow(int a, int b)
{
    if (b == 1)
        return a;
    int res = binpow(a, b >> 1) % MOD;
    res = res * res % MOD;
    if (b & 1)
        res = res * a % MOD;
    return res % MOD;
}
void hhtuann()
{
    int N;
    cin >> N;

    string s = to_string(N);
    reverse(s.begin(), s.end());

    int R = stoll(s);
    cout << binpow(N, R) << endl;

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