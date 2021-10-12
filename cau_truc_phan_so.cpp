#include<iostream>
#include<string>
using namespace std;
long long ucln(long long a,long long b)
{
	while(a>0)
	{
		if(a<b)
		{
			long long u=a;
			a=b;
			b=u;
		}
		a%=b;
	}
	return b;
}
struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &p)
{
	cin>>p.tu>>p.mau;
}
PhanSo rutgon(PhanSo &p)
{
	long long c=ucln(p.tu,p.mau);
	p.tu/=c;
	p.mau/=c;
	return p;
}
void in(PhanSo &p)
{
	p=rutgon(p);
	cout<<p.tu<<"/"<<p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

