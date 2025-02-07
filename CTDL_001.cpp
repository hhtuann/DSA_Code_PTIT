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

int N, a[MAXN];
bool isOK = true;

void nextBinary()
{
    int i = (N + 1) / 2;
    while (i > 0 && a[i] == 1)
        a[i--] = 0;
    if (i > 0)
        a[i] = 1;
    else
        isOK = false;
}
void hhtuann()
{
    cin >> N;
    while (isOK)
    {
        for (int i = 1; i <= (N + 1) / 2; ++i)
            cout << a[i] << " ";
        for (int i = N / 2; i > 0; --i)
            cout << a[i] << " ";
        cout << endl;
        nextBinary();
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