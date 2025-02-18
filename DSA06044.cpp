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

    vector<int> oodIndex, evenIndex;
    for (int i = 0; i < N; ++i)
    {
        if (i % 2)
            evenIndex.emplace_back(a[i]);
        else
            oodIndex.emplace_back(a[i]);
    }

    sort(oodIndex.begin(), oodIndex.end());
    sort(evenIndex.begin(), evenIndex.end(), greater<int>());

    for (int i = 0; i < N; ++i)
    {
        if (i % 2)
            cout << evenIndex[i / 2] << " ";
        else
            cout << oodIndex[i / 2] << " ";
    }

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
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */