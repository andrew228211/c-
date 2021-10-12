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
   		cin>>a>>b;
   		long long j=0;
   		for(int i=0;i<a.size();i++)
   		{
   				j=(j*10+(a[i]-'0'))%b;
		}
		cout<<j<<endl;
   }
}
