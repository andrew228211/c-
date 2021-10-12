#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct Bangdiem{
	string msv;
	string tsv;
	string lop;
	float a,b,c;
};
void nhap(Bangdiem& A)
{
	cin.ignore();
	cin>>A.msv;
	cin.ignore();
	getline(cin,A.tsv);
	cin>>A.lop>>A.a>>A.b>>A.c;
}
int kt(Bangdiem&x,Bangdiem&y)
{
	string a=x.msv;
	string b=y.msv;
	if(a>b)
		return 0;
	return 1;
}
void in(Bangdiem ds[100],int n)
{
	struct	Bangdiem min;
	for(int i=0;i<n;i++)
	{
		min.msv=ds[i].msv;
		min.tsv=ds[i].tsv;
		min.lop=ds[i].lop;
		min.a=ds[i].a;
		min.b=ds[i].b;
		min.c=ds[i].c;
		cout<<i+1<<" ";
		for(int j=i+1;j<n;j++)
		{
			if(kt(min,ds[j])==0)
			{
				swap(min,ds[j]);			
			}
		}
		cout<<min.msv<<" "<<min.tsv<<" "<<min.lop<<" ";
		cout<<fixed<<setprecision(1)<<min.a<<" ";
		cout<<fixed<<setprecision(1)<<min.b<<" ";
		cout<<fixed<<setprecision(1)<<min.c;
		cout<<endl;
	}
}
int main()
{
	struct Bangdiem ds[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		nhap(ds[i]);
	}
	in(ds,n);
}

