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
    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for (auto &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    for (int i = 0; i < N - 2; ++i)
    {
        if (a[i] >= K)
            break;
        for (int j = i + 1; j < N - 1; ++j)
        {
            if (a[i] + a[j] >= K)
                break;
            int k = *lower_bound(a.begin() + j + 1, a.end(), K - a[i] - a[j]);
            if (k == K - a[i] - a[j])
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;

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