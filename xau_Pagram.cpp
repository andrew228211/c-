#include <iostream>
#include <string.h>
#include <string>
using namespace std;
using std::string;
char a[]={"aqzswxcdevfrbtgnhymjukilop"};
int main()
{
	int t;
	cin>> t;
	while(t--)
{
	int dem=0;
	char s[1000000];
	cin >>s;
	int k;
	cin >>k;
	int u=strlen(s);
	for(int i=0;i<u-1;i++)
	{
		for(int j=i+1;j<u;j++)
		{
			if(s[i]==s[j])
			{
				for(int k=j;k<u;k++)
				{
					s[k]=s[k+1];
				}
				u--;
				j--;
			}
		}
	}
	dem=26-strlen(s);
	if(dem<=k)
	{
		cout<<1;
	}
	else
		cout<<0;
	cout<<endl;
}
}


