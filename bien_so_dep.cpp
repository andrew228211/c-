#include<iostream>
#include<cmath>
#include<string>
using namespace std; 
int main()
{ 
	int t; 
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s[5]==s[6]&&s[6]==s[7]&&s[7]==s[9]&&s[9]==s[10])
		{
			cout<<"YES"<<endl;
			continue;
		}
		else if(s[5]==s[6]&&s[6]==s[7]&&s[9]==s[10])
		{
			cout<<"YES"<<endl;
			continue;
		}
		else if(s[5]<s[6]&&s[6]<s[7]&&s[7]<s[9]&&s[9]<s[10])
		{
			cout<<"YES"<<endl;
			continue;
		}
		int dem=0;
		for(int i=5;i<s.size();i++)
		{
			if(s[i]=='.')
				continue;
			if(s[i]=='6'||s[i]=='8')
			{
				dem++;
			}
		}
		if(dem==5)
		{
				cout<<"YES"<<endl;
			continue;
		}
		cout<<"NO"<<endl;
	}
}


