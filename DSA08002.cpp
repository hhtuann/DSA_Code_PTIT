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

    string s;
    queue<int> qu;
    while (cin >> s)
    {
        if (s == "PUSH")
        {
            int x;
            cin >> x;
            qu.push(x);
        }KO
        else if (s == "POP")
        {
            if (!qu.empty())
                qu.pop();
        }
        else if (s == "PRINTFRONT")
        {
            if (!qu.empty())
                cout << qu.front() << endl;
            else
                cout << "NONE" << endl;
        }
    }

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