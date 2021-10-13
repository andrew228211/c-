#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
int kt(int n)
{
	int dem=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n/=i;
			}
			dem+=i;
		}
	}
	if(n>1) dem+=n;
	return dem;
}
int main()
{
	int n;
	cin>>n;
	int u=kt(n);
	cout<<u;
}
