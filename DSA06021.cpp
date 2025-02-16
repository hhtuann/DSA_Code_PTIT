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
    int N, X;
    cin >> N >> X;

    vector<int> a(N);
    int pos = 0;

    for (int i = 0, x; i < N; ++i)
    {
        cin >> x;
        a[i] = x;
        if (i && a[i - 1] > a[i])
            pos = i;
    }

    if (binary_search(a.begin(), a.begin() + pos, X))
        cout << lower_bound(a.begin(), a.begin() + pos, X) - a.begin() + 1 << endl;
    else
        cout << lower_bound(a.begin() + pos, a.end(), X) - a.begin() + 1 << endl;

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