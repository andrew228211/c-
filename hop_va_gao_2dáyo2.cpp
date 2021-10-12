#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],b[k],c[n+k],mangdem[n+k];
		int h=0,p=0;
		for(int i=0;i<n+k;i++)	mangdem[i]=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			c[i]=a[i];
			h++;
		}
		for(int i=0;i<k;i++)
		{
			cin>>b[i];
			for(int j=0;j<n;j++)
			{
				if(b[i]==a[j])
				{
					mangdem[i]=1;
					break;
				}
			}
			if(mangdem[i]==0)
			{
				c[h]=b[i];
				h++;
			}
		}	
		sort(c,c+h);
		for(int i=0;i<h;i++)
		{
			cout<<c[i]<<" ";
		}
		cout<<"\n";
		for(int i=0;i<k;i++)
		{
			if(mangdem[i]==1)
			{
				cout<<b[i]<<" ";
			}
		}
		cout<<"\n";
	}
}
