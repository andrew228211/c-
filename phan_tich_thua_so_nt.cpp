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
		int a[100000],Mangdem[100000];
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
		for (int i = 0; i < d; i++)
		{
			Mangdem[i] = 1;
		}
		for (int i = 0; i < d-1; i++)
		{
			for (int j = i + 1; j < d; j++)
			{
				if (a[i] == a[j])
				{
					Mangdem[i]++;
					for (int k = j; k < d; k++)
					{
						a[k] = a[k + 1];
					}
					d--;
					j--;
				}
			}
		}
		for (int i = 0; i < d; i++)
		{
			cout << a[i] << " " << Mangdem[i] << " ";
		}
		cout << endl;
	}
	
}
