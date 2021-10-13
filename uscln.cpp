#include<iostream>
#include<math.h>
using namespace std;
long long bcnn(long long  a, long long b)
{
	long long a1 = a, b1 = b;
	while (a > 0)
	{
		if (a < b)
		{
			long long tmp = a;
			a = b;
			b = tmp;
		}
		a %= b;
	}
	return (a1 / b) * b1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long c = 1;
		for (int i = n; i >=1; i--)
		{
			if (c % i)
			{
				c = bcnn(c, i);
			}
		}
		cout << c << endl;
	}
}
