#include<iostream>
#include<string>
using namespace std;
main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int b[n*m];
		int hang=n,cot=m,k=0,p=0;
		while(k<m*n)
		{
			for(int i=p;i<cot;i++)
			{
				b[k++]=a[p][i];
			}
			for(int i=p+1;i<hang;i++)
			{
				b[k++]=a[i][cot-1];
			}
			for(int i=cot-2;i>=p;i--)
			{
				b[k++]=a[hang-1][i];
			}
			for(int i=hang-2;i>p;i--)
			{
				b[k++]=a[i][p];
			}
			p++;
			hang--;
			cot--;
		}
		for(int i=n*m-1;i>=0;i--)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}

