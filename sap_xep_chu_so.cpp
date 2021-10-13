#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n*n];
		int m=0;
		for(int i=0;i<n;i++)
		{
			int d=0;
			cin>>a[i];
			int h=a[i];
			while(a[i])
			{
				d++;
				a[i]=a[i]/10;
			}
			for(int i=0;i<d;i++)
			{
				b[m]=h%10;
				h=h/10;
				m++;
			}
			
		}
		sort(b,b+m);
		for(int i=0;i<m-1;i++)
		{
			for(int j=i+1;j<m;j++)
			{
				if(b[i]==b[j])
				{
					for(int k=j;k<m;k++)
					{
						b[k]=b[k+1];
					}
					m--;
					j--;
				}
			}
		}
		for(int i=0;i<m;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
		
	}
}
