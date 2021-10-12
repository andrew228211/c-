#include <iostream>
#include <string.h>
#include <string>
#include<math.h>
using namespace std;
using std::string;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		string s;
		cin>>s;
		long long u=s.size();
		long long k[u];
		
		for(long long i=0;i<u;i++)
		{
			k[i]=s[i]-'0';
		}
		int sum1=0,sum2=0;
		for(long long i=0;i<u;i++)
			{
				if(i%2==0)
					sum1=sum1+k[i];
				else
					sum2=sum2+k[i];
			}	
		if(abs(sum1-sum2)%11==0)
			cout<<1;
		else
			cout<<0;
		cout<<endl; 
	}	
}


