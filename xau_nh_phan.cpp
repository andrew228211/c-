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
		string u=s;
		int dem=1;
		int Max=1;
		for(int j=0;j<u.size();j++)
		{
    		if(u[j]==u[j+1]&&u[j]=='1')
    		{
    			dem++;
			}
			else
				dem=1;
			Max=max(dem,Max);
		}
		if(Max==k)
		{
			cout<<u<<endl;
		}
		s=next(s);
	}
}
