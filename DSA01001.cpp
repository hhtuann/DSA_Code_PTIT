#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

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
    string s;
    cin >> s;

    nextBinary(s);
    cout << s << endl;

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