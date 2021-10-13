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
		string s,s1;
		cin>>s;
		int n=s.size();
		int sum=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				s1+=s[i];
			}
			else
				sum=sum+s[i]-'0';
		}
		
		int k=s1.size();
		for(int i=0;i<k-1;i++)
		{
			for(int j=i+1;j<k;j++)
			{
				if(s1[i]>s1[j])
				{
					swap(s1[i],s1[j]);
				}
			}
		}
		cout<<s1<<sum<<endl;
	}
}

