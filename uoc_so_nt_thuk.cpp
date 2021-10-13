#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[100000];
		int k = 0, d = 0;
		for (int i = 2; i <= sqrt(n); i++)
		{
			while (n % i == 0)
			{
				n /= i;
				a[k] = i;
				k++;
				d++;
			}
		}
		if (n > 1)
		{
			d++;
			a[d - 1] = n;
		}
		int u;
		cin >> u;
		if (u > d)
		{
			cout << -1;
		}
		else
			cout << a[u-1];	
		cout << endl;
	}
	
}
