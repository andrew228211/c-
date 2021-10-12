#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.141592653589793238
using namespace std;
int kt(double a,double b,double c)
{
	if(a+b>c&&b+c>a&&a+c>b)
	{
		return 1;
	}
	return 0;
}
struct truc{
	double a,b;
};
void nhap(truc& A)
{
	cin>>A.a>>A.b;
}
double dodai(truc& A, truc& B)
{
	double x=B.a-A.a;
	double y=B.b-A.b;
	double m=x*x+y*y;
	return sqrt(m);
}
double dientich(truc& A,truc& B,truc& C)
{
	if(kt(dodai(A,B),dodai(B,C),dodai(C,A))==0)
		return 0;
	double  m=dodai(A,B);
	double  n=dodai(B,C);
	double  p=dodai(A,C);
	double u=sqrt((m+n+p)*(m+n-p)*(m+p-n)*(n+p-m))*1/4;
	double R=m*n*p/(4*u);
	return (double)R*PI*R;
}
int main()
{
	struct truc A,B,C;
	int t;
	cin>>t;
	while(t--)
	{
		nhap(A),nhap(B),nhap(C);
		if(dientich(A,B,C)==0)
			cout<<"INVALID"<<endl;
		else
			cout<<fixed<<setprecision(3)<<dientich(A,B,C)<<endl;
	}
}
