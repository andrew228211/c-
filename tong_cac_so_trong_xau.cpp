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
		 int b=0;
		 int tong=0,sum=0;
		 int n=s.size();
		 int j=0;
		 while(j<n)
		 {
		 	for(int i=j;i<n;i++)
		 	{
		 	j++;
			 if(s[i]>='a'&&s[i]<='z')
		 	{
		 		break;
			}
			else
			{
				b=b*10+s[i]-'0';
				sum=b;
			}
			}
			tong=sum+tong;
			b=0;
			sum=0;
	}
		 tong=sum+tong;
		 cout<<tong<<endl;
	}
}
	
