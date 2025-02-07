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

int changeToFive(int n)
{
    string s = to_string(n);
    for (auto &x : s)
        if (x == '6')
            x = '5';
    return stoll(s);
}
int changeToSix(int n)
{
    string s = to_string(n);
    for (auto &x : s)
        if (x == '5')
            x = '6';
    return stoll(s);
}
void hhtuann()
{
    int a, b;
    cin >> a >> b;

    cout << changeToFive(a) + changeToFive(b) << " ";
    cout << changeToSix(a) + changeToSix(b) << endl;

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