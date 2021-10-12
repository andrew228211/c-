#include<iostream>
#include<math.h>
using namespace std;
int bcnn(int a,int b)
{
	int a1=a,b1=b;
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
	return (a1/b)*b1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m,n,a,b;
		cin>>m>>n>>a>>b;
		int dem=0,dem1=0;
		int x=bcnn(a,b);
		for(int i=m;i<=n;i++)
		{
			if(i%x==0)
			{
				dem1++;
			}
		}
		for(int i=m;i<=n;i++)
		{
			if(i%a==0)
			{
				dem++;
			}
			if(i%b==0)
			{
				dem++;
			}	
		}
		cout<<dem-dem1<<endl;
	}
}

