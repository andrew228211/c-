#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;
struct Mh{
	int stt;
	string name;
	string nhom;
	float a,b;
};
void nhap(Mh &A)
{
	scanf("\n");
	getline(cin,A.name);
	getline(cin,A.nhom);
	cin>>A.a>>A.b;
}
bool cmp(Mh &x,Mh& y)
{
	float d=x.b-x.a;
	float k=y.b-y.a;
	return d>k;
}
void in(Mh ds[],int n)
{
	cout<<fixed<<setprecision(2);
	for(int i=0;i<n;i++)
	{
		cout<<ds[i].stt<<" "<<ds[i].name<<" "<<ds[i].nhom<<" "<<ds[i].b-ds[i].a<<endl;
	}
}
int main()
{
	Mh ds[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		ds[i].stt=i+1;
		nhap(ds[i]);
	}
	sort(ds,ds+n,cmp);
	in(ds,n);
}

