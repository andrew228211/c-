#include<iostream>
using namespace std;
int truot(int n,int m)
{
	if(n%m==0) return m;
	else return n%m;
}
void nhap(int a[][20],int n)
{
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++) cin>>a[i][j];
}
int main()
{
	int n; cin>>n;
	int a[20][20];
	nhap(a,n);
	int m;cin>>m;
	int b[20][20];
	nhap(b,m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]=a[i][j]*b[truot(i,m)][truot(j,m)];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

