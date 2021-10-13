#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		string s;
		int u=a.size();
		int k=0;
		for(int i=0;i<u;i++)
		{
			s+=a[i];
			if(a[i+1]=='0'&&a[i+2]=='8'&&a[i+3]=='4')
			{
				i=i+3;
			}
		}
		cout<<s<<endl;;
	}
}

