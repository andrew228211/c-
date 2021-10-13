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
		 string n;
		 cin>>n;
		 long long k=0;
		 for(int i=0;i<n.size();i++)
		 {
		 	k=k+n[i]-'0';
		 }
		 if(k%9==0&&k!=0)
		 {
		 	cout<<1;
		 }
		 else
		 	cout<<0;
		cout<<endl;
	}
}


