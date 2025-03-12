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
    string exp;
    cin >> exp;

    stack<string> operands;
    for (int i = 0; i < exp.size(); ++i)
    {
        if (isalpha(exp[i]))
            operands.push(string(1, exp[i]));
        else
        {
            string op1 = operands.top();
            operands.pop();
            string op2 = operands.top();
            operands.pop();
            string temp = exp[i] + op2 + op1;
            operands.push(temp);
        }
    }

    cout << operands.top() << endl;

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
