#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		for (long long i = 2; i <= sqrt(n); i++)
		{
			while (n % i == 0)
			{
				n = n / i;
				cout << i << " ";
			}
		}
		if (n > 1)
			cout << n;
		cout << endl;
	}
}
