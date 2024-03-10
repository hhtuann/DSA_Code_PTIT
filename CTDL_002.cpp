#include <bits/stdc++.h>
using namespace std;
#define LL long long

int n, k;
int a[100000];
int f[100000];
int cnt = 0;
bool check()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += f[i] * a[i];
    }
    return sum == k;
}
void solve(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        f[i] = j;
        if (i == n)
        {
            if (check())
            {
                cnt++;
                for (int x = 1; x <= n; x++)
                {
                    if (f[x])
                        cout << a[x] << " ";
                }
                cout << endl;
            }
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
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    solve(1);
    cout << cnt;
    return 0;
}