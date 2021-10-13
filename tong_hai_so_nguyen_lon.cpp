#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, du;
    string a, b;
    cin >> n;
    while (n--)
    {
        string ans = "";
        cin >> a >> b;
        while (a.size() > b.size())
            b = "0" + b;
        while (a.size() < b.size())
            a = "0" + a;
        du = 0;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int tmp = a[i] - '0' + b[i] - '0' + du;
            du = tmp / 10;
            tmp %= 10;
            ans = (char)(tmp + '0') + ans;
        }
        if (du)
            ans = "1" + ans;
        cout << ans << "\n";
    }
}

