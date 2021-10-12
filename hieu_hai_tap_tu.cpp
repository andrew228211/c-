#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int oo = 1e9 + 7;
using namespace std;

void solve()
{
    set<string> se;
    string s1, s2, tmp;
    getline(cin, s1);
    getline(cin, s2);
    stringstream ss(s1);
    while (ss >> tmp)
        se.insert(tmp);
    ss.clear();
    ss.str(s2);
    while (ss >> tmp)
        se.erase(tmp);
    for (set<string>::iterator i = se.begin(); i != se.end(); i++)
        cout << *i << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
        cout << endl;
    }
}
