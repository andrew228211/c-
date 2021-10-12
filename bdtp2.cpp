#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
using namespace std;
struct Bangdiem{
	string msv;
	string tsv;
	string lop;
	float a,b,c;
};
void nhap(Bangdiem& A)
{
	scanf("\n");
	cin>>A.msv;
	scanf("\n");
	getline(cin,A.tsv);
	cin>>A.lop>>A.a>>A.b>>A.c;
}
int kt(Bangdiem&x,Bangdiem&y)
{
	string a=x.tsv;
	string b=y.tsv;
	if(a>b)
		return 1;
	else return 0;
}
void in(Bangdiem ds[105],int n)
{
	struct	Bangdiem min;
	for(int i=0;i<n;i++)
	{
		min=ds[i];
		cout<<i+1<<" ";
		for(int j=i+1;j<n;j++)
		{
			if(kt(min,ds[j])==1)
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
	struct Bangdiem ds[105];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		nhap(ds[i]);
	}
	in(ds,n);
}
