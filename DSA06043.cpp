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

    vector<int> a(N);
    for (auto &x : a)
        cin >> x;

    vector<int> prefix1(N), prefix2(N);
    prefix1[0] = a[0];
    for (int i = 1; i < N; ++i)
        prefix1[i] = prefix1[i - 1] + a[i];
    prefix2[N - 1] = a[N - 1];
    for (int i = N - 2; i >= 0; --i)
        prefix2[i] = prefix2[i + 1] + a[i];

    for (int i = 0; i < N; ++i)
    {
        if (prefix1[i] == prefix2[i])
        {
            cout << i + 1 << endl;
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

    int testcase = 1;
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */