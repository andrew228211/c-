#include<iostream>
#include<math.h>
using namespace std;
int kt(int n)
{
	int d = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
			if(n%i==0)
				d = 1;
	}
	if (d == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int  n;
		cin >> n;
		if (n == 4)
		{
			cout << 2 << " " << 2 ;
		}
		int a[10000],k=0,d=0;
		for (int i = 2; i <= n; i++)
		{
			if (kt(i))
			{
				a[k] = i;
				k++;
				d++;
			}
		}
		int u = 0;
		for (int i = 0; i <= d/2; i++)
		{
			for (int j = d - 1; j >= d / 2; j--)
			{
				if (a[i] + a[j] == n)
				{
					cout << a[i] << " " << a[j];
					u = 1;
					break;
				}
			}
			if (u == 1)
			{
				break;
			}
		}
		cout << endl;
	}
}
