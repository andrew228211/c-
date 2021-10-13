#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int kt1(char a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
			return 0;
	}
	return 1;
}
int kt(char a[],int n)
{
	for(int i=0;i<=n/2;i++)
	{
		if(a[i]!=a[n-i-1])
		  	return 0;		
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[1000];
		cin>>a;
		int n=strlen(a);
		int b[1000];
		if(kt1(a,n)==1&&kt(a,n)==1)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
		
	}
}

