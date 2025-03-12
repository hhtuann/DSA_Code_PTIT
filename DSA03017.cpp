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
    string s;
    int k;
    cin >> k >> s;

    map<char, int> cnt;
    for (char c : s)
        ++cnt[c];

    priority_queue<int> pq;
    for (auto [c, x] : cnt)
        pq.push(x);

    while (k--)
    {
        int x = pq.top();
        pq.pop();
        pq.push(x - 1);
    }

    int ans = 0;
    while (!pq.empty())
    {
        ans += pq.top() * pq.top();
        pq.pop();
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