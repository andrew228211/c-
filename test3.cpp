#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#define ll long long
using namespace std;
struct Xep{
	int a,b;
};	
bool cmp(Xep m, Xep t)
{
	return m.a<t.a;
}
void xuat(Xep ds[],int n)
{
	int dem=ds[0].a+ds[0].b;
	for(int i=1;i<n;i++)
	{
		if(dem>ds[i].a)
		{
			dem=ds[i].b+dem;
		}
		else
		{
			dem=ds[i].a+ds[i].b;
		}
	}
	cout<<dem;
}
int main()
{
	Xep ds[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ds[i].a>>ds[i].b;
	}
	sort(ds,ds+n,cmp);
	xuat(ds,n);
}
