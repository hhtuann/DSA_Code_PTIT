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

    stack<char> st;
    for (auto &c : s)
    {
        if (c == '(' || c == '[' || c == '{')
            st.push(c);
        else
        {
            if (st.empty())
            {
                cout << "NO" << endl;
                return;
            }
            if (c == ')' && st.top() != '(')
            {
                cout << "NO" << endl;
                return;
            }
            if (c == ']' && st.top() != '[')
            {
                cout << "NO" << endl;
                return;
            }
            if (c == '}' && st.top() != '{')
            {
                cout << "NO" << endl;
                return;
            }
            st.pop();
        }
    }

    if (st.empty())
        cout << "YES" << endl;
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