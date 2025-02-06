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

string isIncreasing(vector<int> &a)
{
    for (int i = 1; i < a.size(); ++i)
        if (a[i] < a[i - 1])
            return "No";
    return "Yes";
}
void hhtuann()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (auto &x : a)
        cin >> x;

    for (int i = 0; i < N / 2; ++i)
    {
        if (a[i] > a[N - i - 1])
            swap(a[i], a[N - i - 1]);
    }

    cout << isIncreasing(a) << endl;

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