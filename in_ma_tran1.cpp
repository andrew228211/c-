#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}	
		}
		int b[n*n];
		int h=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				for(int j=0;j<n;j++)
				{
					b[h]=a[i][j];
					h++;
				}
			}
			if(i%2!=0)
			{
				for(int j=n-1;j>=0;j--)
				{
					b[h]=a[i][j];
					h++;
				}
			}
		}
		for(int i=0;i<n*n;i++)
		{
			cout<<b[i]<<" ";
		}
	
		cout<<endl;
	}
}


