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
		int dem=0, k=0,u=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				k++;
				u=1;
				n=n/i;
			}
			if(u!=0)
			{
				dem++;
			}
			u=0;
		}	
		if(n>1)
		{
			dem++;
		}
		if(dem==3&&k==2)
			cout<<1;
		else
			cout<<0;
		cout<<endl;
	}
}
