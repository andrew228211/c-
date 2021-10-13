#include<iostream>
#include<cmath>
using namespace std;
int kt(int a[],int n,int b[],int m)
{
	int t=0,k=0,sum=0;
	for(int i=0;i<n;i++)
	{
		t+=a[i];
		k=0;
		for(int j=i+1;j<m;j++)
		{
			k+=b[j];
		}
		if(t+k>sum) 
			sum=t+k;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int j=0;j<m;j++)
		{
			cin>>b[j];
		}
		int max=kt(a,n,b,m);
		int best=kt(b,m,a,n);
		if(max<best)
			max=best;
		cout<<max<<endl;
	}
	
}

