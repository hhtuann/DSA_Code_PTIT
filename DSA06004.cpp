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
    int N, M;
    cin >> N >> M;

    vector<int> a(N), b(M);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    map<int, int> mp;
    for (auto &x : a)
        mp[x] = 1;
    for (auto &x : b)
    {
        if (mp[x] == 0)
            mp[x] = 1;
        else if (mp[x] == 1)
            mp[x] = 2;
    }

    for (auto &x : mp)
        cout << x.first << ' ';
    cout << endl;

    for (auto &x : mp)
        if (x.second == 2)
            cout << x.first << ' ';
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