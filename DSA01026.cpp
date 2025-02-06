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

bool isLocPhat(string &s)
{
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == '8' && s[i - 1] == '8')
            return false;
        if (i > 2 && s[i] == '6' && s[i - 1] == '6' && s[i - 2] == '6' && s[i - 3] == '6')
            return false;
    }
    return true;
}
void nextBinary(string &s)
{
    for (int i = s.size() - 2; i > 0; --i)
    {
        if (s[i] == '8')
            s[i] = '6';
        else
        {
            s[i] = '8';
            break;
        }
    }
}
void hhtuann()
{
    int N;
    cin >> N;
    N -= 3;

    string s;
    for (int i = 1; i <= N + 2; ++i)
        s += '6';

    for (int i = 0; i < (1 << N); ++i)
    {
        if (isLocPhat(s))
            cout << "8" << s << endl;
        nextBinary(s);
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