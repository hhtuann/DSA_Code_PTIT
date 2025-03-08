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
    N = pow(10, N);

    queue<int> q;
    stack<int> ans;
    q.push(6);
    q.push(8);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        if (u < N)
            ans.push(u);
        else
            break;

        q.push(u * 10 + 6);
        q.push(u * 10 + 8);
    }

    cout << ans.size() << endl;
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }

    cout << endl;

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