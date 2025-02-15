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

int N, a[MAXN];
bool visited[MAXN];

bool isVowel(int x)
{
    return x == 1 || x == 5;
}
bool check()
{
    for (int i = 2; i < N; ++i)
        if (isVowel(a[i]) && !isVowel(a[i - 1]) && !isVowel(a[i + 1]))
            return false;
    return true;
}
void Try(int i)
{
    if (i > N)
    {
        if (check())
        {
            for (int j = 1; j <= N; ++j)
                cout << char('A' + a[j] - 1);
            cout << endl;
        }
        return;
    }
    for (int j = 1; j <= N; ++j)
    {
        if (!visited[j])
        {
            visited[j] = true;
            a[i] = j;
            Try(i + 1);
            visited[j] = false;
        }
    }
}
void hhtuann()
{
    char c;
    cin >> c;

    N = c - 'A' + 1;
    Try(1);

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