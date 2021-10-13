#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
using namespace std;
struct Time{
	int a,b,c;
};
void nhap(Time& A)
{
	cin>>A.a>>A.b>>A.c;
}
int kt(Time &x,Time &y)
{
	int m=x.a;
	int n=y.a;
	if(m>n)
		return 0;
	if(m<n)
		return 1;
	 m=x.b;
	 n=y.b;
	if(m>n)
		return 0;
	if(m<n)
		return 1;
	m=x.c;
	n=y.c;
	if(m>n)
		return 0;
	else return 1;
}
void in(Time ds[5000],int n)
{
	struct Time min;
	for(int i=0;i<n;i++)
	{
		min=ds[i];
		for(int j=i+1;j<n;j++)
		{
			if(kt(min,ds[j])==0)
			{
				swap(min,ds[j]);
			}
		}
		cout<<min.a<<" "<<min.b<<" "<<min.c;
		cout<<endl;
	}
}
int main()
{
	struct Time ds[5000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		nhap(ds[i]);
	}
	in(ds,n);
}

