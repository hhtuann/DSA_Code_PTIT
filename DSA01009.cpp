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

bool isHAHA(string &s)
{
    if (s.back() != 'A')
        return false;
    for (int i = 1; i < s.size(); ++i)
        if (s[i] == 'H' && s[i - 1] == 'H')
            return false;
    return true;
}
void nextBinary(string &s)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'H')
            s[i] = 'A';
        else
        {
            s[i] = 'H';
            break;
        }
    }
}
void hhtuann()
{
    int N;
    cin >> N;
    N -= 2;

    if (N == 0)
    {
        cout << "HA" << endl;
        return;
    }

    string s;
    for (int i = 1; i <= N; ++i)
        s += 'A';

    for (int i = 0; i < (1 << N); ++i)
    {
        if (isHAHA(s))
            cout << "HA" << s << endl;
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
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */