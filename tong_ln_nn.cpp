#include<iostream>
#include<cmath>
#include<string>
using namespace std; 
long long min(string s)
{
	long long k=0;
	int n=s.size();
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='6')
		{
				s[i]='5';
		}
		k=k*10+(s[i]-'0');;
	}
	return k;
}
long long max(string s)
{
	long long k=0;
	int n=s.size();
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='5')
		{
				s[i]='6';
		}
		k=k*10+(s[i]-'0');
	}
	return k;
}
int main()
{ 
	int t; 
	cin>>t;
	while(t--)
	{
		 string n1,n2;
		 cin>>n1>>n2;
		 cout<<min(n1)+min(n2)<<" "<<max(n1)+max(n2);
		 cout<<endl;
	}
}
