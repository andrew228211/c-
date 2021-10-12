#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1][n+1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
	int tong=0, sum1=0,sum2=0;
	int hang=0,cot=0;
	for(int i=0;i<n;i++)
	{
		sum1=0;
		sum2=0;
		for(int j=0;j<n;j++)
		{
			sum1=sum1+a[i][j];	
			sum2=sum2+a[j][i];
		}
		hang=max(sum2,hang);
		cot=max(sum1,cot);
	}
	tong=max(hang,cot);
	int tong1=0;
	if(hang==tong)
	{
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
		{
			hang=hang-a[i][j];
		}	
		tong1=hang+tong1;
		hang=tong;
		}
		cout<<tong1<<endl;
		continue;
	}
		if(cot==tong)
	{
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
		{
			cot=cot-a[j][i];
		}	
		tong1=cot+tong1;
		cot=tong;
		}
		cout<<tong1<<endl;
	}
}
}


