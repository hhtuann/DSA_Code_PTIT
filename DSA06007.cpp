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

void hhtuann()
{
    int N;
    cin >> N;

    vector<int> a(N), b(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < N; ++i)
    {
        if (a[i] != b[i])
        {
            cout << i + 1 << ' ';
            break;
        }
    }

    for (int i = N - 1; i >= 0; --i)
    {
        if (a[i] != b[i])
        {
            cout << i + 1 << endl;
            break;
        }
    }

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