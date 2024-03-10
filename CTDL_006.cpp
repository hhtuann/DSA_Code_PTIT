#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // input
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    map<int, int> m;
    for (auto x : v)
    {
        if (!m[x])
        {
            cout << x << " ";
            m[x] = 1;
        }
    }
    return 0;
}