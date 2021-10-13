#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],s[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s[i]=a[i];
		}
		int sum=0;
		for(int i=1;i<n;i++)
		{
			sum=0;
			for(int j=0;j<i;j++)
			{
				if(a[i]>a[j])
				{
					sum=max(sum,s[j]);
				}
			}
			s[i]+=sum;
		}
		sort(s,s+n);
		cout<<s[n-1]<<endl;
	}
}
