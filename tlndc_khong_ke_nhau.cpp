#include<iostream>
#include<cmath>
using namespace std;
long n;
long a[100000],f[100000];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		f[0]=a[0];
		f[1]=max(a[0],a[1]);
		for(int i=2;i<n;i++)
		{
			f[i]=max(f[i-2]+a[i],f[i-1]);
		}
		cout<<f[n-1]<<"\n";
	}	
}


