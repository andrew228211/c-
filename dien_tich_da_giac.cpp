#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int a[n+1][2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	a[n][0]=a[0][0];
	a[n][1]=a[0][1];
	int tong1=0,tong2=0,k=0;
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(j%2!=0&&i!=0)
			{
				tong1+=a[k][0]*a[i][j];	
				k++;
			}
		}
	}
	k=0;
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(j==0&&i!=0)
			{
				tong2+=a[k][1]*a[i][j];	
				k++;
			}
		}
	}
	float tong=tong1-tong2;
	cout<<fixed<<setprecision(3);
	cout<<tong/2<<endl;
}
}
