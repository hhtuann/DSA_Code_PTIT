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

    queue<int> qu;
    int choose;

    while (N--)
    {
        cin >> choose;
        if (choose == 1)
        {
            cout << qu.size() << endl;
        }
        else if (choose == 2)
        {
            if (qu.empty())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (choose == 3)
        {
            int x;
            cin >> x;
            qu.push(x);
        }
        else if (choose == 4)
        {
            if (!qu.empty())
            {
                qu.pop();
            }
        }
        else if (choose == 5)
        {
            if (!qu.empty())
            {
                cout << qu.front() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (choose == 6)
        {
            if (!qu.empty())
            {
                cout << qu.back() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
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
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */