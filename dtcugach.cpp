#include<iostream>
#include<string>
using namespace std;
int kt(int a[],int n)
{
	for(int i=0;i<n/2;i++)
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
	cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		int a[n];
		for(int i=0;i<n;i++)
		{
			if(s[i]>='A'&&s[i]<='C'||s[i]>='a'&&s[i]<='c')
			{
				a[i]=2;
			}
			if(s[i]>='D'&&s[i]<='F'||s[i]>='d'&&s[i]<='f')
			{
				a[i]=3;
			}
			if(s[i]>='G'&&s[i]<='I'||s[i]>='g'&&s[i]<='i')
			{
				a[i]=4;
			}
			if(s[i]>='J'&&s[i]<='L'||s[i]>='j'&&s[i]<='l')
			{
				a[i]=5;
			}
			if(s[i]>='M'&&s[i]<='O'||s[i]>='m'&&s[i]<='o')
			{
				a[i]=6;
			}
			if(s[i]>='P'&&s[i]<='S'||s[i]>='p'&&s[i]<='s')
			{
				a[i]=7;
			}
			if(s[i]>='T'&&s[i]<='V'||s[i]>='t'&&s[i]<='v')
			{
				a[i]=8;
			}
			if(s[i]>='W'&&s[i]<='Z'||s[i]>='w'&&s[i]<='z')
			{
				a[i]=9;
			}
		}
			if(kt(a,n)==1)
				cout<<"YES";
			else
				cout<<"NO";
			cout<<endl;
			
	}
}

