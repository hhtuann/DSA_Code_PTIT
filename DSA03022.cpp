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
const int INF = 1e9 + 7;

// tích lớn nhất của 2 phần tử trong mảng
int maxTwoProduct(vector<int> &a)
{
    int n = a.size();
    return max(a[0] * a[1], a[n - 1] * a[n - 2]);
}
int maxThreeProduct(vector<int> &a)
{
    int n = a.size();
    return max({a[0] * a[1] * a[2], a[n - 1] * a[n - 2] * a[n - 3], a[0] * a[1] * a[n - 1]});
}
void hhtuann()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (auto &x : a)
        cin >> x;

    sort(a.begin(), a.end());
    cout << max(maxTwoProduct(a), maxThreeProduct(a)) << endl;

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
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */