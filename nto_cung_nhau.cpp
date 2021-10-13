#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int ucln(int a,int b)
{
	while(a>0)
	{
		if(a<b)
		{
			int u=a;
			a=b;
			b=u;
		}
		a%=b;
	}
	return b;
}
int nto(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			int n;
			cin>>n;
			int dem=0;
			for(int i=1;i<n;i++)
			{
				if(ucln(n,i)==1)
				{
					dem++;
				}
			}			
			if(nto(dem)==1)
				cout<<1;
			else
				cout<<0;
			cout<<endl;
	}
}


