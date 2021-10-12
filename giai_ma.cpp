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
		s+='0';
		int k=0;
		int n=s.size();
		while(dem<n&&k<n-1)
		{
				int h=dem;
				for(int i=dem;i<n;i++)
				{
					if(s[i]=='D'&&s[i+1]!='D')
					{
						dem=i+2;
						break;
					}
					if(s[i]!='D')
					{
						k=i+1;
						cout<<k;
					}
				}
				h=max(k,h);
				for(int i=dem;i>h;i--)
				{
					cout<<i;
				}
		}
		cout<<endl;
	}
}

