#include<iostream>
#include<math.h>
#include<algorithm>
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
			for(long i=0;i<n;i++)
			{
				cin>>a[i];
			}
			for(int i=0;i<n-1;i++)
			{
				if(a[i]==a[i+1])
				{
					a[i]=2*a[i];
					a[i+1]=0;
				}
			}
			int k=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]!=0)
				{
					cout<<a[i]<<" ";
					k++;
				}
			}
			for(int i=k;i<n;i++)
			{
				cout<<0<<" ";
			}
		cout<<endl;				
	}
}


