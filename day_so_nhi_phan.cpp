#include<iostream>
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
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		int max=1,k=0; 
		for(int i=0;i<n;i++)
		{ 
			int x=0,y=0;
			for(int j=i;j<n;j++)
			{	
				 x+= a[j]; 
				 y+= b[j]; 
				 if(x==y) 
				 	k=j-i+1; 
			}
			if(k>max) max=k; 
		}
 		cout<<max;
  		cout<<endl;
	} 
}

