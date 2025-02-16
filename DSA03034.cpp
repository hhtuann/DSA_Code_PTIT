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

void hhtuann()
{
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> a(N), b(M), c(K);
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;
    for (int &x : c)
        cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int i = 0, j = 0, k = 0;
    bool check = false;
    while (i < N && j < M && k < K)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            cout << a[i] << ' ';
            check = true;
            i++, j++, k++;
        }
        else if (a[i] < b[j])
            i++;
        else if (b[j] < c[k])
            j++;
        else
            k++;
    }

    if (!check)
        cout << "NO";
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