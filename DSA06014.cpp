#include <bits/stdc++.h>
using namespace std;

#ifdef HoangHoangTuan
#include <debug.h>
#else
#define debug(...) 12
#endif

#define endl '\n'
#define int long long

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

vector<bool> isPrime(MAXN, true);

void prepare()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAXN; ++i)
    {
        if (isPrime[i])
            for (int j = i * i; j < MAXN; j += i)
                isPrime[j] = false;
    }
}
void hhtuann()
{
    int N;
    cin >> N;

    for (int i = 2; i <= N / 2; ++i)
    {
        if (isPrime[i] && isPrime[N - i])
        {
            cout << i << " " << N - i << endl;
            return;
        }
    }

    cout << -1 << endl;

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