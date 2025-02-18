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
    stack<int> st;

    while (cin >> s)
    {
        if (s == "push")
        {
            int N;
            cin >> N;
            st.push(N);
        }
        else if (s == "show")
        {
            if (st.empty())
                cout << "empty" << endl;
            else
            {
                vector<int> a;
                while (!st.empty())
                {
                    a.emplace_back(st.top());
                    st.pop();
                }
                for (int i = a.size() - 1; i >= 0; --i)
                {
                    cout << a[i] << " ";
                    st.push(a[i]);
                }
                cout << endl;
            }
        }
        else if (s == "pop")
        {
            if (st.empty())
                cout << "empty" << endl;
            else
                st.pop();
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