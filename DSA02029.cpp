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

void Try(char sourse, char helper, char target, int n)
{
    if (n == 1)
    {
        cout << sourse << " -> " << target << endl;
        return;
    }
    Try(sourse, target, helper, n - 1);
    Try(sourse, helper, target, 1);
    Try(helper, sourse, target, n - 1);
}
void hhtuann()
{
    int N;
    cin >> N;
    Try('A', 'B', 'C', N);
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