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

void Try(vector<int> &a, int n)
{
    if (n < 1)
        return;

    vector<int> tmp(n - 1);
    for (int i = 0; i < n - 1; ++i)
        tmp[i] = a[i] + a[i + 1];

    Try(tmp, n - 1);

    cout << "[";
    for (int i = 0; i < n - 1; ++i)
        cout << a[i] << " ";
    cout << a.back() << "] ";
}
void hhtuann()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (auto &x : a)
        cin >> x;

    Try(a, N);
    cout << endl;

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