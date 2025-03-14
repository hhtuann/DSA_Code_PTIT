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

int N, K, a[MAXN];
bool mark[MAXN];
bool isOK = true;

void nextCombination()
{
    int i = K;
    while (i > 0 && a[i] == N - K + i)
        --i;

    a[i] = (i > 0) ? a[i] + 1 : 0;
    for (int j = i + 1; j <= K; ++j)
        a[j] = a[i] + (j - i);

    isOK = (i > 0);
}
void hhtuann()
{
    cin >> N >> K;
    memset(mark, false, sizeof(mark));

    for (int i = 1; i <= K; ++i)
    {
        cin >> a[i];
        mark[a[i]] = true;
    }

    nextCombination();

    if (!isOK)
    {
        cout << K << endl;
        return;
    }

    int ans = 0;
    for (int i = 1; i <= K; ++i)
        if (!mark[a[i]])
            ++ans;

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