#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int ucln(long long  a,long long b)
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
void rutgon(PhanSo &p)
{
    long long b = ucln(abs(p.tu), abs(p.mau));
    p.tu = p.tu / b;
    p.mau = p.mau / b;
}
void process(PhanSo A,PhanSo B)
{
	PhanSo t;
	rutgon(A),rutgon(B);
	long long u=A.mau*B.mau/ucln(A.mau,B.mau);
	t.tu=A.tu*u/A.mau+B.tu*u/B.mau;
	t.mau=u*u;
	t.tu=t.tu*t.tu;
	rutgon(t);
	PhanSo d;
	d.tu=A.tu*B.tu*t.tu;
	d.mau=A.mau*B.mau*t.mau;
	rutgon(d);
	cout<<t.tu<<"/"<<t.mau<<" "<<d.tu<<"/"<<d.mau;
	cout<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}


