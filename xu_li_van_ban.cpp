#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
string m;
char lower(char c)
{
	if(c>='A'&&c<='Z')
	{
		c+=32;
	}
	return c;
}
char upper(char c)
{
	if(c>='a'&&c<='z')
	{
		c-=32;
	}
	return c;
}
int main()
{
	string n;
	while(cin>>m)
	{
		n+=m+" ";
	}
	int h=n.size();
	for(int i=0;i<h;i++)
	{
		n[i]=lower(n[i]);
	}
	n[0]=upper(n[0]);
	for(int i=0;i<h-1;i++)
	{
		cout<<n[i];
		if(n[i+1]=='.'||n[i+1]=='?'||n[i+1]=='!')
		{
			n[i+3]=upper(n[i+3]);
			cout<<endl;
			i=i+2;
		}
	}
}

