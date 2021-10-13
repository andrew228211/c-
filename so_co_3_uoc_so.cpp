#include<iostream>
#include<math.h>
using namespace std;
int p[1000000];
void sang()
{
	for(int i=0;i<1000000;i++) p[i]=1;
	p[0]=p[1]=0;
	for(int i=2;i<1000;i++)
	{
		if(p[i]==1)
		{
			for(int j=i*i;j<1000000;j=j+i)
			{
				p[j]=0;
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	sang();
	while (t--)
	{
		long long n;
		cin >> n;
		int dem=0;
		for (long long i = 2; i <= sqrt(n); i++)
		{
			
				if (p[i]==1)
				{
					dem++;
				}
			
		}
		cout <<dem<< endl;
	}
}

