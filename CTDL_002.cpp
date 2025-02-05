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

int N, K, a[MAXN], b[MAXN];
bool isOK = true;

bool checkValid()
{
    int sum = 0;
    for (int i = 1; i <= N; ++i)
        sum += a[i] * b[i];
    if (sum == K)
        return true;
    return false;
}
void nextBinary()
{
    int i = N;
    while (i > 0 && a[i] == 1)
        a[i--] = 0;
    if (i > 0)
        a[i] = 1;
    else
        isOK = false;
}
void hhtuann()
{
    cin >> N >> K;
    for (int i = 1; i <= N; ++i)
        cin >> b[i];
    int count = 0;
    while (isOK)
    {
        if (checkValid())
        {
            ++count;
            for (int i = 1; i <= N; ++i)
                if (a[i] == 1)
                    cout << b[i] << " ";
            cout << endl;
        }
        nextBinary();
    }
    cout << count << endl;
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