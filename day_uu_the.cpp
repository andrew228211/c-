#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<sstream>
#include <cstdlib>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--)
	{
		string s;
		getline(cin,s);
		int a[1000];
		int h=0;
		stringstream ss(s);
		char tmp[1000];
		while(ss>>tmp)
		{
			a[h]=atoi(tmp);
			h++;
		}
		int dem1=0,dem2=0;
		for(int i=0;i<h;i++)
		{
			if(a[i]%2==0)
			{
				dem1++;
			}
			if(a[i]%2!=0)
			{
				dem2++;
			}
		}
		if(h%2==0&&dem1>dem2)
		{
			cout<<"YES"<<endl;
		}
		else if(h%2!=0&&dem1<dem2)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
		
}

