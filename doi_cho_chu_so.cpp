#include <iostream>
#include <string>
#define ll long long
#define endl "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while (t--)
    {
        s.clear();
        cin >> s;
        int n = s.size() - 2;
        while (n >= 0 && s[n + 1] >= s[n])
            n--;
        if (n < 0)
        {
            cout << -1 << "\n";
            continue;
        }
        for (int i = s.size() - 1; i > n; i--)
        {
            if (s[i] < s[n])
            {
                while (s[i - 1] == s[i])
                    i--;
                swap(s[n], s[i]);
                break;
            }
        }
        cout << s;
        cout << endl;
    }
}
