#include <bits/stdc++.h>
using namespace std;
int ok = 0;

void check(int a[], int n)
{
    string s = "";
    for (int i = 0; i < n; i++)
        s += to_string(a[i]);
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    if (s == tmp)
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

void khoitao(int a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] = 0;
}

void sinh(int a[], int n)
{
    int i = n - 1;
    while (a[i] == 1 && i >= 0)
    {
        a[i] = 0;
        i--;
    }
    if (i == -1)
        ok = 1;
    else
        a[i] = 1;
}

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    khoitao(a, n);
    while (!ok)
    {
        check(a, n);
        sinh(a, n);
    }
    return 0;
}