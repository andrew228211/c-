#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int kt(char a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(abs(a[i+1]-a[i])!=1)
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
	if(kt(a,n))
	{
		cout<<"YES";
	}
	else
		{
			cout<<"NO";
		}
	cout<<endl;
	}
}

