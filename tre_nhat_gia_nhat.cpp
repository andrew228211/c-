#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct Nhanvien{
	string name;
	string date;
};
void nhap(Nhanvien& A)
{
	cin.ignore();
	cin>>A.name>>A.date;
}
int kt(Nhanvien &x,Nhanvien &y)
{
	string a=x.date;
	string b=y.date;
	string k,m;
	for(int i=6;i<=9;i++)
	{
		k+=a[i];
		m+=b[i];
	}
	for(int i=3;i<=4;i++)
	{
		k+=a[i];
		m+=b[i];
	}
	for(int i=0;i<2;i++)
	{
		k+=a[i];
		m+=b[i];
	}
	if(k>m)
		return 1;
	else
		return 0;	
}
void xuat(Nhanvien ds[100],int n)
{
	struct Nhanvien max, min;
	max.date=ds[0].date;
	max.name=ds[0].name;
	min.date=ds[0].date;
	min.name=ds[0].name;
	for(int i=0;i<n;i++)
	{
		if(kt(max,ds[i])==0)
		{
			max.date=ds[i].date;
			max.name=ds[i].name;
		}
		if(kt(min,ds[i])==1)
		{
			min.date=ds[i].date;
			min.name=ds[i].name;
		}
	}
	cout<<max.name<<endl<<min.name;
}
int main()
{
	struct Nhanvien ds[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		nhap(ds[i]);
	}
	xuat(ds,n);
}

