#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

const int MAXN = 1e5 + 5;
int N, K, a[MAXN];

void prevCombination()
{
    int i = K;
    while (i > 0 && a[i] - 1 <= a[i - 1])
        i--;

    a[i] = (i > 0) ? a[i] - 1 : N - K;
    for (int j = i + 1; j <= K; ++j)
        a[j] = N - K + j;
}
void hhtuann()
{
    cin >> N >> K;
    for (int i = 1; i <= K; ++i)
        cin >> a[i];

    prevCombination();
    for (int i = 1; i <= K; ++i)
        cout << a[i] << " ";

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