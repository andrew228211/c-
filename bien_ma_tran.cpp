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
		string a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];	
			}		
		}	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i!=0&&i!=n-1&&j!=0&&j!=n-1)
				{
					a[i][j]=' ';
				}
			}		
		}	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";	
			}	
			cout<<endl;	
		}	
	}
}

