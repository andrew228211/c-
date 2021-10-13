#include<iostream>
#include<math.h>
using namespace std;
int p[1000000];
void sang()
{
	for(int i=0;i<=1000000;i++)
	{
		p[i]=1;
	}
	p[0]=p[1]=0;
	for(int i=2;i<1000;i++)
	{
		if(p[i])
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
	cin>>t;
	sang();
	while(t--)
	{
		int n;
		cin>>n;
		int d=0;
		for(int i=0;i<=n/2;i++)
		{
			if(p[i]==1&&p[n-i]==1)
			{
				cout<<i<<" "<<n-i;
				d=1;
				break;
			}
		}
		if(d==0)
			cout<<-1;
		cout<<endl;
	}
}

