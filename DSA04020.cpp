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

int findK(vector<int> &a, int N, int K)
{
    int l = 0, r = N - 1;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (a[mid] == K)
            return mid;
        if (a[mid] < K)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
void hhtuann()
{
    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for (auto &x : a)
        cin >> x;

    int ans = findK(a, N, K);
    if (ans == -1)
        cout << "NO" << endl;
    else
        cout << ans + 1 << endl;

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