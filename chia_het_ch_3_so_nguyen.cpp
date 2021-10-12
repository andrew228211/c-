#include<stdio.h>
#include<math.h>
long long bcnn(long long a,long long b)
{
	long long a1=a,b1=b;
	while(a>0)
	{
		if(a<b)
		{
			long long u=a;
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
	scanf("%d",&t);
	while(t--)
	{	
		long long x,y,z,n;
		scanf("%lld%lld%lld%lld",&x, &y, &z, &n);
		long long v=bcnn(bcnn(x,y),z);
		long long p=pow(10,n-1);
		if(v>p*10)
		{
			printf("-1");
		}
		else if(p%v==0)
			{
				printf("%lld",p);
			}
		else	
			printf("%lld",(p/v)*v+v);
		printf("\n");
	}
}

