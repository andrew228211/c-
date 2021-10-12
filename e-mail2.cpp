#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int oo = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    vector<string> ans;
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp1, tmp2;
        vector<char> substring;
        while (ss >> tmp1)
        {
            if (!tmp2.empty())
                substring.push_back(tolower(tmp2[0]));
            tmp2 = tmp1;
        }
        for (int i = 0; i < tmp2.size(); i++)
            tmp2[i] = tolower(tmp2[i]);
        ans.push_back(tmp2);
        for (int i = 0; i < substring.size(); i++)
            ans[ans.size() - 1] += substring[i];
    }
    int n = ans.size();
    int f[n] = {0};
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = i - 1; j >= 0; j--)
            if (ans[i] == ans[j])
            {
                if (!f[j])
                    f[i] = 2;
                else
                    f[i] = f[j] + 1;
                break;
            }
        cout << ans[i];
        if (f[i])
            cout << f[i];
        cout << "@ptit.edu.vn\n";
    }
}
