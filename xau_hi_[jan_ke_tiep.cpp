#include<iostream>
#include<string>
using namespace std;
string next(string s)
{
	int h=0;
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]=='0')
			{
			s[i]='1';
			h=1;
			return s;
		}
		else
			s[i]='0';
	}
	if(h==0)
	{
		for(int i=s.size()-1;i>=0;i--)
		{
		if(s[i]=='1')
			{
			s[i]='0';
		}
		}
		s+='0';
		return s;	
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		string u=next(s);
		cout<<u<<endl;
	}
}
