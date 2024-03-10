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
    int p;
    cin >> p;
    for (auto x : v)
        if (x != p)
            cout << x << " ";
    return 0;
}