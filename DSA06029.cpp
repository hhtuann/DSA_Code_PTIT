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

vector<vector<int>> ans;

void addVector(vector<int> &arr, int left, int right)
{
    vector<int> tmp;
    for (int i = left; i <= right; ++i)
        tmp.push_back(arr[i]);
    ans.push_back(tmp);
}
void printVector(vector<int> &arr, int step)
{
    cout << "Buoc " << step << ": ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}
void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); ++i)
    {
        addVector(arr, 0, i - 1);
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    addVector(arr, 0, arr.size() - 1);
}
void hhtuann()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (auto &x : a)
        cin >> x;

    ans.clear();
    insertionSort(a);

    for (int i = ans.size() - 1; i >= 0; --i)
        printVector(ans[i], i);

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
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */