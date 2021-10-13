#include<iostream>
using namespace std;
int ucln(long long a,long long b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else 
			b=b-a;
	}
	return a;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a,b;
		cin >> a >> b;
		long long c=(a/ucln(a,b))*b;
		cout << c << " " << ucln(a,b) << endl;
	}
	return 0;
}
