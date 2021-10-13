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
		 if(s[0]=='0')
			{
				cout<<"INVALID"<<endl;
				continue;
			}
			int u=0;
		 for(int i=0;i<s.size();i++)
		 {
		 	if(s[i]!='0'&&s[i]!='1'&&s[i]!='2'&&s[i]!='3'&&s[i]!='4'&&s[i]!='5'&&s[i]!='6'&&s[i]!='7'&&s[i]!='8'&&s[i]!='9')
		 	{
		 		u=1;
		 		break;
			 }
		 }
		 if(u==1)
		 {
		 	cout<<"INVALID"<<endl;
				continue;
		 }
		 else
		 {
		 	int dem=0;
		 	for(int i=0;i<=9;i++)
		 	{
		 		for(int j=0;j<s.size();j++)
		 		{
		 			if(i==s[j]-'0')
		 			{
		 				dem++;
		 				break;
					}
				}
			}
			if(dem==10)
				cout<<"YES";
			else
				cout<<"NO";
			cout<<endl;
		 }
			
	}
}
