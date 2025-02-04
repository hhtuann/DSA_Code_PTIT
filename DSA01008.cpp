#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

int countBits(string &s)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i)
        cnt += (s[i] == '1');
    return cnt;
}
void nextBinary(string &s)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
            s[i] = '0';
        else
        {
            s[i] = '1';
            break;
        }
    }
}
void hhtuann()
{
    int N, K;
    cin >> N >> K;

    string s;
    for (int i = 1; i <= N; ++i)
        s += '0';

    for (int i = 0; i < (1 << N); ++i)
    {
        if (countBits(s) == K)
            cout << s << endl;
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