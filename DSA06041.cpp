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

    map<int, int> mp;
    int valMax = -1, cntMax = 0;
    for (int i = 0, x; i < N; ++i)
    {
        cin >> x;
        mp[x]++;
        if (mp[x] > cntMax)
        {
            cntMax = mp[x];
            valMax = x;
        }
    }

    if (cntMax > N / 2)
        cout << valMax << endl;
    else
        cout << "NO" << endl;

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