#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	vector<string>s;
	cin.ignore();
	for(int i=0;i<t;i++)
	{
		string a;
		getline(cin,a);
		s.push_back(a);
	}
	for(int i=0;i<t-1;i++)
	{
		for(int j=i+1;j<t;j++)
		{
			if(s[i]==s[j])
			{
				swap(s[j],s[t-1]);
				t--;
				j--;
			}		
		}
	}
	cout<<t<<endl;
}

