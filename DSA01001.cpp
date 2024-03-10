#include <bits/stdc++.h>
using namespace std;
#define LL long long

string solve(string s)
{
    // your solution
    int n = s.size() - 1;
    while (s[n] == '1' && n >= 0)
    {
        s[n] = '0';
        n--;
    }
    if (n == -1)
        return s;
    else
        s[n] = '1';
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // input
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}