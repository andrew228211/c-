#include<iostream>
#include<math.h>
int p[10000];
void sang()
{
	for(int i=0;i<10000;i++) p[i]=1;
	p[0]=p[1]=0;
	for(int i=2;i<100;i++)
	{
		if(p[i]==1)
		{
			for(int j=i*i;j<10000;j=j+i)
			{
				p[j]=0;
			}
		}
	}
}
using namespace std;
int main()
{
	int t;
	cin >> t;
	sang();
	while (t--)
	{
		int n;
		cin>>n;
		cout<<1<<" ";
		for(int i=2;i<=n;i++)
		{
			if(i%2==0)
			{
				cout<<2<<" ";
			}
			else
			{
				for (int n = 3; n <= sqrt(i); n++)
				{
					if (i % n == 0)
					{
						cout<<n<<" ";
						break;
					}
					
				}
				if(p[i]==1)
					cout<<i<<" ";
			}	
					
		}
		cout<<endl;
	}
}
