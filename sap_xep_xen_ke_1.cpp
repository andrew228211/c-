#include <iostream>
#include<string>
#include<math.h>
#include<algorithm>
#include<functional>
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
		sort(a,a+n,greater<int>());
		int h,k;
		if(n%2==0)
		{
			h=k=n/2;
		}
		if(n%2!=0)
		{
			h=n/2+1;
			k=n/2;
		}
		int p[h],q[k];
		for(int i=0;i<h;i++)
		{
			p[i]=a[i];
		}	
		int m=h;
		for(int i=0;i<k;i++)
		{
			q[i]=a[m];
			m++;
		}	
		sort(q,q+k);
		int x=0,y=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				a[i]=p[x];
				x++;
			}
			if(i%2!=0)
			{
				a[i]=q[y];
				y++;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl; 
	} 
}

