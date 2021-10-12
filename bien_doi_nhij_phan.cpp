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
		int n,m;
		cin>>n>>m;	
		int a[n][m],b[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];	
			}		
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				b[i][j]=1;
			}		
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int d=0,k=0;
				for(int v=0;v<m;v++)
				{
					if(a[i][v]!=0)
					{
						d=1;
					}
				}
				for(int v=0;v<n;v++)
				{
					if(a[v][j]!=0)
					{
						k=1;
					}
				}
				if(d==0&&k==0)
				{
					b[i][j]=a[i][j];
				}
			}	
		}	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<b[i][j]<<" ";
			}		
			cout<<endl;
		}
	}
}


