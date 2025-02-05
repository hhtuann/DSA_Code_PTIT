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

void nextBinary(string &s)
{
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] == 'B')
            s[i] = 'A';
        else
        {
            s[i] = 'B';
            break;
        }
    }
}
void hhtuann()
{
    int N;
    cin >> N;

    string s;
    for (int i = 1; i <= N; ++i)
        s += 'A';

    for (int i = 0; i < (1 << N); ++i)
    {
        cout << s << " ";
        nextBinary(s);
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