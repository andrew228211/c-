#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	string s1 = "";
	string a=".";
	long long n=s.size();
	for(int i=0;i<n;i++)
		{
			if(s[i]>=65&&s[i]<=90)
			{
				s[i]+=32;
			}
		}	
		for(int i=0;i<n;i++)
		{
			if(s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='a'||s[i]=='i'||s[i]=='y')
			{
				for(int k=i;k<n;k++)
				{
					s[k]=s[k+1];
				}
				n--;
				i--;
			}
		}
		for(int i=0;i<n;i++)
		{
			s1+=a+s[i];
		}
	
	cout<<s1<<endl;
}

