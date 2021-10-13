#include<bits/stdc++.h>
using namespace std;
int n,x;
int a[1000];
int m;
void kt()
{
	m=1;
	int i=x;
	while(i>0&&a[i]==n-x+i) i--;
	a[i]++;
	if(i>0)
	{
		
		for(int j=i+1;j<n;j++)
		{
			a[j]=a[i]+j-i;
		}
	}
	else
		m=0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	cin>>n>>x;
	for(int i=1;i<=x;i++)
	{
		cin>>a[i];
	}
	kt();
	if(m!=0)
	{
		for(int i=1;i<=x;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
		for(int i=1;i<=x;i++)
		{
			cout<<i<<" ";
		}
	cout<<endl;
	}
}
