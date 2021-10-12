#include <iostream>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int sum1 = 0, sum2 = 0;
        for (int i = 1; i < n; i++)
            sum2 += a[i];
        int i;
        for (i = 0; i < n - 1; i++)
        {
            sum1 += a[i], sum2 -= a[i + 1];
            if (sum1 == sum2)
                break;
        }
        if (sum1 == sum2)
            cout << i + 2;
        else
            cout << -1;
        cout << endl;
    }
}
