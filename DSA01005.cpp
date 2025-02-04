#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

const int MAXN = 1e5 + 5;
int N, a[MAXN];
bool isOK;

void nextPermutation()
{
    int i = N - 1;
    while (i > 0 && a[i] > a[i + 1])
        i--;

    sort(a + i + 1, a + N + 1);
    for (int j = i + 1; j <= N; ++j)
    {
        if (a[j] > a[i])
        {
            swap(a[j], a[i]);
            break;
        }
    }

    isOK = (i > 0);
}
void hhtuann()
{
    cin >> N;
    for (int i = 1; i <= N; ++i)
        a[i] = i;

    isOK = true;
    while (isOK)
    {
        for (int i = 1; i <= N; ++i)
            cout << a[i];
        cout << " ";
        nextPermutation();
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