#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		string a;
		cin>>a;
		cin >>k;
		int n=a.size();
		int dem=0,cnt=0;
		int f[130];
		for(int i=0;i<'z'+1;i++)
		{
			f[i]=0;
		}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(f[a[j]]==0)
			{
				dem++;
			}
			f[a[j]]=1;
			if(dem==k)
			{
				cnt++;
			}
			if(dem>k)
			{
				break;
			}
		}
		dem=0;
		for(int j=0;j<'z'+1;j++)
		{
			f[j]=0;
		}
	}
	cout<<cnt<<endl;
	}
}

