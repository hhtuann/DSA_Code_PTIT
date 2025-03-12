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

vector<string> cubes;

void prepare()
{
    for (int i = 1; i <= 1000; ++i)
        cubes.emplace_back(to_string(i * i * i));
    reverse(cubes.begin(), cubes.end());
}
bool check(string &N, string &cube)
{
    for (int i = 0, j = 0; i < N.size(); ++i)
    {
        if (N[i] == cube[j])
            ++j;
        if (j == cube.size())
            return true;
    }
    return false;
}
void hhtuann()
{
    string N;
    cin >> N;

    for (auto &x : cubes)
    {
        if (x.size() > N.size())
            continue;
        if (check(N, x))
        {
            cout << x << endl;
            return;
        }
    }

    cout << -1 << endl;

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

    prepare();
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */