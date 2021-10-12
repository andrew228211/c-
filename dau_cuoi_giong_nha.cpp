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
		int dem=0;
		int n=s.size();
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(s[i]==s[j])
				{
					dem++;
				}
			}
		}
		dem+=n;
		cout<<dem<<endl;
	} 
}

