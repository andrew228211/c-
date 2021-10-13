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
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int mangdem[n];
		for(int i=0;i<n;i++)
		{
			mangdem[i]=1;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					mangdem[i]++;
					for(int k=j;k<n;k++)
					{
						a[k]=a[k+1];
					}
					n--;
					j--;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(mangdem[i]==mangdem[j]&&a[i]>a[j])
				{
					int u=a[i];
					a[i]=a[j];
					a[j]=u;
				}
				if(mangdem[i]<mangdem[j])
				{
					int u=mangdem[i];
					mangdem[i]=mangdem[j];
					mangdem[j]=u;
					int v=a[i];
					a[i]=a[j];
					a[j]=v;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<mangdem[i];j++)
			{
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}

