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
    int N;
    cin >> N >> s;

    int cntX = 0, cntT = 0;
    int ans = 0;
    for (auto &c : s)
    {
        cntX += (c == 'X');
        cntT += (c == 'T');
    }

    for (int i = 0; i < cntX; ++i)
    {
        if (s[i] != 'X')
        {
            for (int j = cntX; j < N; ++j)
            {
                if (s[j] != 'X')
                {
                    ++ans;
                    swap(s[i], s[j]);
                    break;
                }
            }
        }
    }

    for (int i = cntX; i < cntX + cntT; ++i)
    {
        if (s[i] != 'T')
        {
            for (int j = cntX + cntT; j < N; ++j)
            {
                if (s[j] != 'T')
                {
                    ++ans;
                    swap(s[i], s[j]);
                    break;
                }
            }
        }
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
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */