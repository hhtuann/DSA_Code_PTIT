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

int precedence(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/' || c == '%')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return 0;
}
void hhtuann()
{
    string exp;
    cin >> exp;

    stack<char> operators;
    string res = "";
    for (int i = 0; i < exp.size(); ++i)
    {
        if (isalpha(exp[i]))
            res += exp[i];
        else if (exp[i] == '(')
            operators.push(exp[i]);
        else if (exp[i] == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                res += operators.top();
                operators.pop();
            }
            operators.pop();
        }
        else
        {
            while (!operators.empty() && precedence(operators.top()) >= precedence(exp[i]))
            {
                res += operators.top();
                operators.pop();
            }
            operators.push(exp[i]);
        }
    }

    while (!operators.empty())
    {
        res += operators.top();
        operators.pop();
    }

    cout << res << endl;

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