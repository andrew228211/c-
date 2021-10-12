#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;
    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        ans.clear();
        ans.resize(0);
        cin >> a >> b;
        if (a.size() < b.size() || (a.size() == b.size() && a < b))
            swap(a, b);
        while (a.size() > b.size())
            b = "0" + b;
        int du = 0;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int tmp = a[i] - b[i] - du;
            if (tmp < 0)
                du = 1, tmp += 10;
            else
                du = 0;
            ans.push_back(tmp);
        }
        for (int i = ans.size() - 1; i >= 0; i--)
            cout << ans[i];
        cout << "\n";
    }
}

