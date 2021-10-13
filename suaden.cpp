#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,k,b;
	cin>>n>>k>>b;
	int a[b+1],f[n]={0};
	int sua=0;
	for(int i=1;i<=b;i++)
	{
		cin>>a[i];
		f[a[i]]++;
		sua++;
	}
	int h=1;
	int dem=0;
	while(h+k-1<=n)
	{
	for(int i=h;i<h+k;i++)
	{
		if(f[i]>0)
		{
			dem++;
		}
	}
	sua=min(dem,sua);
	h++;
	dem=0;
	}
	cout<<sua;
}

