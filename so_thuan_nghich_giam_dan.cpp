#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<vector>
using namespace std;
int kt(string s)
{
	int n=s.size();
	if(n==1)
		return 0;
	for(int i=0;i<=n/2;i++)
	{
		if(s[i]!=s[n-i-1])
			return 0;
	}
	return 1;
}
struct Danhsach{
	string so;
};
bool kt2(Danhsach &x,Danhsach &y)
{
	string a=x.so;
	string b=y.so;
	if(a.size()==b.size())
	{
		return x.so>y.so;
	}
	else
		return a.size()>b.size();
}
void in(Danhsach ds[],int n)
{
	int mangdem[n];
	for(int i=0;i<n;i++)
	{
		mangdem[i]=1;
		for(int j=i+1;j<n;j++)
		{
			if(ds[i].so==ds[j].so)
			{
				mangdem[i]++;
				for(int k=j;k<n;k++)
				{
					ds[k]=ds[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ds[i].so<<" "<<mangdem[i]<<endl;
	}
}
int main()
{
	Danhsach ds[1000];
	string s;
	int n=0;
	while(cin>>s)
	{
		if(kt(s)==1)
		{
			ds[n].so=s;
			n++;
		}
	}
	sort(ds,ds+n,kt2);
	in(ds,n);
}

