#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int k=0,p=0,hang=n,cot=m;
		int b[n][m];
		while(k<n*m)
		{
			if(k==n*m-1)
			{
				b[p][p]=a[p][p];
				break;
			}
			for(int i=p+1;i<cot;i++)
			{
				b[p][i]=a[p][i-1];
				k++;
			}
			for(int i=p+1;i<hang;i++)
			{
				b[i][cot-1]=a[i-1][cot-1];
				k++;
			}
			for(int i=cot-2;i>=p;i--)
			{
				b[hang-1][i]=a[hang-1][i+1];
				k++;
			}
			for(int i = hang-2;i>=p;i--)
			{
				b[i][p]=a[i+1][p];
				k++;
			}
			p++;hang--;cot--;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<b[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}


