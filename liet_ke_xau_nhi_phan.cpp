#include <iostream>
#include <math.h>
using namespace std;

string next(string s) {
    for (int i = s.length() - 1; i >= 0; i--)
        if (s[i] == '0') {
            s[i] = '1';
            return s;
        }
        else
            s[i] = '0';
    return "";
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string s = "";
        for (int i = 0; i < N; i++)
            s="0"+s;
        for (int i = 0; i < pow(2, N); i++) {
            cout << s << " ";
            s = next(s);
        }
        cout << endl;
    }
}
