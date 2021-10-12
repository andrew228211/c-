#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		int mangdem[n],f[100000];
		for(int i=0;i<n;i++)
		{
			mangdem[i]=a[0][i];
		}
		int u=n;
		for(int i=0;i<u-1;i++)
		{
			for(int j=i+1;j<u;j++)
			{
				if(mangdem[i]==mangdem[j])
				{
					for(int k=j;k<u;k++)
					{
						mangdem[k]=mangdem[k+1];
					}
					u--;
					j--;
				}
			}
		}
		for(int i=1;i<n;i++)
		{
			for(int h=0;h<100000;h++)
			{
				f[h]=0;
			}
			for(int j=0;j<n;j++)
			{
				f[a[i][j]]++;
			}
			for(int j=0;j<u;j++)
			{
				if(f[mangdem[j]]==0)
				{
					for(int k=j;k<u;k++)
					{
						mangdem[k]=mangdem[k+1];
					}
					u--;
					j--;
				}
			}
		}
		cout<<u<<endl;
	}
	
}

