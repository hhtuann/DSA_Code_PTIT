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

int N, K, a[MAXN];
vector<string> s;

void Try(int i)
{
    if (i > K)
    {
        for (int j = 1; j <= K; ++j)
            cout << s[a[j] - 1] << " ";
        cout << endl;
        return;
    }
    for (int j = a[i - 1] + 1; j <= N - K + i; ++j)
    {
        a[i] = j;
        Try(i + 1);
    }
}
void hhtuann()
{
    cin >> N >> K;
    s.resize(N);
    for (auto &x : s)
        cin >> x;

    sort(s.begin(), s.end());
    s.resize(unique(s.begin(), s.end()) - s.begin());

    N = s.size();
    a[0] = 0;
    Try(1);

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