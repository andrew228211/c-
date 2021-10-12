#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   		string a;
   		long long b,c;
   		cin>>a>>b>>c;
   		long long k=0;  
   		for(int i=0;i<a.size();i++)
		   {
		   		k=(k*10+(a[i]-'0'))%c;
		   }
		int x=1;
		while(b>0)
		{
			if(b%2>0)
			{
				x=x * k % c;
			}
			k=k*k%c;
			b=b/2;
		}
		cout<<x<<endl;
		
   }
}
