#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

const int MAXN = 1e5 + 5;
int N, a[MAXN];

void Try(int i, int pre, int sum)
{
    for (int j = pre; j > 0; j--)
    {
        if (sum + j > N)
            continue;
        a[i] = j;
        if (sum + j == N)
        {
            cout << "(";
            for (int x = 1; x < i; x++)
                cout << a[x] << " ";
            cout << a[i] << ") ";
        }
        else
            Try(i + 1, j, sum + j);
    }
}
void hhtuann()
{
    cin >> N;

    Try(1, N, 0);
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