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
const int INF = 1e9 + 7;

bool visited[MAXN];
string _s;

void Try(string &s, int i)
{
    if (i >= s.size())
    {
        cout << s << " ";
        return;
    }
    for (int j = 0; j < _s.size(); ++j)
    {
        if (!visited[j])
        {
            visited[j] = true;
            s[i] = _s[j];
            Try(s, i + 1);
            visited[j] = false;
        }
    }
}
void hhtuann()
{
    string s;
    cin >> s;
    _s = s;

    Try(s, 0);
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