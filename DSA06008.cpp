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
    int N, M, ans = 0;
    cin >> N >> M;

    vector<int> X(N), Y(M);
    for (auto &x : X)
        cin >> x;
    for (auto &x : Y)
        cin >> x;

    sort(Y.begin(), Y.end());

    for (auto &x : X)
    {
        if (x == 1)
        {
            int tmp = upper_bound(Y.begin(), Y.end(), 0) - Y.begin();
            ans += tmp;
        }
        else if (x == 2)
        {
            int tmp = upper_bound(Y.begin(), Y.end(), 4) - lower_bound(Y.begin(), Y.end(), 2);
            ans += M - tmp;
        }
        else if (x == 3)
        {
            int tmp = upper_bound(Y.begin(), Y.end(), 3) - lower_bound(Y.begin(), Y.end(), 3);
            ans += M - tmp;
        }
        else if (x > 3)
        {
            int tmp = upper_bound(Y.begin(), Y.end(), x) - lower_bound(Y.begin(), Y.end(), 2);
            ans += M - tmp;
        }
    }

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