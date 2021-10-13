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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int k=-999999,h=0;		
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					k=i;
					break;
				}
			}
			if(k!=-999999)
			{
				break;
			}
		}
		int Max=a[k];
		for(int i=k;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				Max=max(Max,a[i]);
			}
		}
		int x=Max;
		for(int i=k;i<n-1;i++)
		{
			if(Max<a[i])
			{
				h=i;
				x=a[i];
				break;
			}
		}
		if(Max==x) h=n;
		cout<<k+1<<" "<<h<<endl;
	}
}

