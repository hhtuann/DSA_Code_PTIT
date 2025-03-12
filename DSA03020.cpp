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
    cin >> s;

    stack<int> st;
    int tmp = 0, ans = 0;
    for (auto &x : s)
    {
        if (st.empty())
        {
            st.push(x);
            tmp = 0;
        }
        else if (st.top() == '[' && x == ']')
        {
            st.pop();
            tmp += 2;
        }
        else if (st.top() == ']' && x == '[')
        {
            ans += st.size() + tmp;
            st.pop();
        }
        else
            st.push(x);
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
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */