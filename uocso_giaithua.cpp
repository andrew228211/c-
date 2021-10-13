#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int t; 
	cin>>t; 
	while(t--)
	{ 
		int n,k;
		cin>>n>>k;
		int dem=0;
		for(int i=1;i<=n;i++)
		{
			if(i%k==0)
		{
				int u=i;
			while(u%k==0)
			{
				dem++;
				u=u/k;
			}
		}
		}
		cout<<dem<<endl;
	}
}


