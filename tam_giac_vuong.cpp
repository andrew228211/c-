#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
#define endl "\n"
using namespace std;
 
vector<ll> a;
int n, l, r;
 
bool binSearch()
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (a[i] != a[j])
            {
                //tìm ki?m nh? phân, tìm x trên do?n t? l t?i r n?u có return 1
                ll x = a[i] + a[j];
                l = j + 1, r = n - 1;
                while (l <= r)
                {
                    int m = (l + r) / 2;
                    if (a[m] == x)
                        return 1;
                    if (a[m] < x)
                        l = m + 1;
                    else
                        r = m - 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    ll tmp;
    cin >> t;
    while (t--)
    {
        a.clear(), a.resize(0);
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp >= 0) // có tru?ng h?p c?nh = 0 m?i vl
                a.push_back(tmp * tmp);
        }
        sort(a.begin(), a.end());
        if (!a.empty() && binSearch())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
