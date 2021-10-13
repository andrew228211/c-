#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int oo = 1e9 + 7;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int b[n * n];
    for (int i = 0; i < n * n; i++)
        cin >> b[i];
    sort(b, b + n * n);
    int a[n][n];
    int num = 0;
    int spec = 0;
    while (num < n * n)
    {
        for (int i = spec; i < n - spec; i++)
            a[spec][i] = b[num++];
        if (num == n * n)
            break;
        for (int i = spec + 1; i < n - spec; i++)
            a[i][n - 1 - spec] = b[num++];
        for (int i = n - 2 - spec; i >= spec; i--)
            a[n - 1 - spec][i] = b[num++];
        for (int i = n - 2 - spec; i >= spec + 1; i--)
            a[i][spec] = b[num++];
        spec++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}
