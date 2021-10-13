#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x, l, r;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k >> x;
    int index = lower_bound(a.begin(), a.end(), x) - a.begin();
    if (a[index] == x)
    {
        r = index + 1;
        l = index - 1;
    }
    else
    {
        r = index;
        l = index - 1;
    }
    for (int i = k / 2 - 1; i >= 0; i--)
        cout << a[l - i] << " ";
    for (int i = 0; i < k / 2; i++)
        cout << a[r + i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
