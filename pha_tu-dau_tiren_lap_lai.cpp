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
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int d=999999;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
				if(d>j)
				{
					d=j;
				}
			}
			}
		}
		if(d==999999)
			cout<<-1;
		else
			cout<<a[d];
		cout<<endl;
	}
}

