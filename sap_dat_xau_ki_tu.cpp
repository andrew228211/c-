#include <iostream>
#include <string>
#define ll long long
#define endl "\n"
using namespace std;
 
string s;
void solve()
{
    int f['Z' - 'A' + 2] = {0};
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
        f[s[i] - 'a']++;
    if (n % 2)
        n = n / 2 + 1;
    else
        n = n / 2;
    for (int i = 0; i < 'Z' - 'A' + 2; i++)
        if (f[i] > n)
        {
            cout << 0 << endl;
            return;
        }
    cout << 1;
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
}
