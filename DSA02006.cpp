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

int N, sum, a[MAXN], b[MAXN];
bool isOK;

void Try(int i, int sum)
{
    if (i > N)
    {
        if (sum == 0)
        {
            vector<int> tmp;
            for (int j = 1; j <= N; ++j)
                if (a[j])
                    tmp.emplace_back(b[j]);

            cout << "[";
            for (int j = 0; j < tmp.size() - 1; ++j)
                cout << tmp[j] << " ";
            cout << tmp.back() << "] ";

            isOK = true;
        }
        return;
    }

    if (sum < 0)
        return;

    for (int j = 1; j >= 0; --j)
    {
        a[i] = j;
        Try(i + 1, sum - j * b[i]);
    }
}
void hhtuann()
{
    cin >> N >> sum;
    for (int i = 1; i <= N; ++i)
        cin >> b[i];

    sort(b + 1, b + N + 1);
    isOK = false;

    Try(1, sum);
    if (!isOK)
        cout << -1;
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