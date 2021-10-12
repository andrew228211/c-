#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
{
	long n;
	cin>>n;
	long a[n];
	for(long i=0; i<n; i++)
	cin>>a[i];
	long b[n];
	b[0]=a[0]*a[1];
	b[n-1]=a[n-1]*a[n-2];
	int h=1;
	for(int i=1;i<n-1;i++)
	{
		b[h]=a[i-1]*a[i+1];
		h++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
}

