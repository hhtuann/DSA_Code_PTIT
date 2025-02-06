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

int N, a[MAXN], b[MAXN];
set<string> ans;

void Try(int i)
{
    if (i > 2)
    {
        string s;
        for (int j = 1; j < i; ++j)
            s += to_string(b[a[j]]) + " ";
        ans.insert(s);
    }
    if (i > N)
        return;

    for (int j = a[i - 1] + 1; j <= N; ++j)
    {
        if (b[a[i - 1]] > b[j])
            continue;
        a[i] = j;
        Try(i + 1);
    }
}
void hhtuann()
{
    cin >> N;
    for (int i = 1; i <= N; ++i)
        cin >> b[i];

    Try(1);
    for (auto &x : ans)
        cout << x << endl;

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