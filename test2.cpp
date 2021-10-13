#include <iostream>
#include <math.h>
#include<string>
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

int main()
{
	int k, n;
	cin>>k>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		s='0'+s;
	}
	for(int i=0;i<pow(2,n);i++)
	{
		cout<<s<<endl;
		s=next(s);
	}
}
