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

    if (s.size() % 2)
    {
        cout << -1 << endl;
        return;
    }

    stack<char> st;
    for (auto &c : s)
    {
        if (!st.empty() && st.top() == '(' && c == ')')
            st.pop();
        else
            st.push(c);
    }

    int k = st.size(), n = 0;
    while (!st.empty() && st.top() == '(')
    {
        st.pop();
        n++;
    }

    cout << (k / 2 + n % 2) << endl;

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