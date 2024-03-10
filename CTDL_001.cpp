#include <bits/stdc++.h>
using namespace std;
#define LL long long

int n;
int f[100000];

void solve(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        f[i] = j;
        if (i == (n + 1) / 2)
        {
            for (int x = 1; x <= (n + 1) / 2; x++)
                cout << f[x] << " ";
            for (int x = n / 2; x >= 1; x--)
                cout << f[x] << " ";
            cout << endl;
        }
        else
            solve(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // input
    cin >> n;
    solve(1);
    return 0;
}