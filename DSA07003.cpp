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
    getline(cin, s);

    int cnt1 = 0, cnt2 = 0;
    for (auto &c : s)
    {
        if (c == '+' || c == '-')
            ++cnt1;
        if (c == '(')
            ++cnt2;
    }

    if (cnt1 == cnt2)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

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
    cin.ignore();
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */