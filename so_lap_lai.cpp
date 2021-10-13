#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int ucln(long long a,long long b)
{
	while(a>0)
	{
		if(a<b)
		{
			long long u=a;
			a=b;
			b=u;
		}
		a%=b;
	}
	return b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	long long a,b,c;
		cin>>a>>b>>c;
		int n=ucln(b,c);
		for(int i=0;i<n;i++)
		{
			cout<<a;
		}
		cout<<endl;
	}
}

