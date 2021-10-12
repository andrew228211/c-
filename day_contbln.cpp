#include<iostream>
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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		double tb=0;
		for(int i=0;i<m;i++)
		{
			tb+=a[i];
		}
		tb/=m;
		double tong=0;
		int dem=0;
		for(int i=1;i<n-m+1;i++)
		{
			tong=0;
			for(int j=i;j<i+m;j++)
			{
				tong+=a[j];
			}
			if(tong/m>tb)
			{
				tb=tong/m;
				dem=i;
			}
		}
		for(int i=dem;i<dem+m;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
	
}

