#include <iostream>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    bool check, checkk;
    int l, r;
    while (t--)
    {
        check = 0;
        checkk = 1;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> l >> r;
        if (l > r)
        {
            int i = l;
            l = r;
            r = i;
        }
        if (a[l] > a[l + 1])
            check = 1;
        for (int i = l + 1; i < r; i++)
        {
            if (check == 1 && a[i] < a[i + 1])
            {
                checkk = 0;
                break;
            }
            if (a[i] > a[i + 1])
                check = 1;
        }
        if (checkk)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}
