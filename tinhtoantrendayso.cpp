#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e9 + 7;
ll tich(int a[], int n)
{
    ll k = 1;
    for (int i = 0; i < n; i++)
        k = (k * a[i]) % oo;
    return k;
}
ll luythua(ll a, int b)
{
    if (b == 1)
        return a;
    ll tmp = luythua(a, b / 2);
    tmp = (tmp * tmp) % oo;
    if (b % 2)
        return (tmp * a) % oo;
    return tmp;
}
int ucln(int a, int b)
{
    while (a > 0)
    {
        if (a < b)
        {
            int u = a;
            a = b;
            b = u;
        }
        a %= b;
    }
    return b;
}
int uc(int a[], int n)
{
    int u = a[0];
    for (int i = 1; i < n; i++)
        u = ucln(a[i], u);
    return u;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        int n;
        cin >> n;
        int a[63];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                flag = 1;
        }
        if (flag)
        {
            cout << 0 << endl;
            continue;
        }
        ll h = tich(a, n);
        int g = uc(a, n);
        cout << luythua(h, g) << endl;
    }
}
