#include<iostream>

using namespace std;

int pow(long long a, long long b, long long p)
{
	long res = 1;
	a %= p;
	b %= p - 1;
	while (b > 0) 
	{
		if (b % 2 > 0) 
			res = res * a % p;
		a = a * a % p;
		b /= 2;
	}
	return res;
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		cout << pow(a, b, c);
		cout << endl;
	}
	return 0;
}
