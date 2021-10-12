#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int k=n-1;
		while(k>=0&&a[k-1]<a[k])
		{
		k--;
		}		
		int u=a[k];
		a[k]=a[k-1];
		a[k-1]=u;
		for(int i=k;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					int u=a[i];
					a[i]=a[j];
					a[j]=u;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

