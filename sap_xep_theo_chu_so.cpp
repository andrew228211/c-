#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
	int n=10, m=10;
	while(a/n>0) n*=10;
	while(b/m>0) m*=10;
	return a*m+b>b*n+a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
{
	long n;
	cin>>n;
	long a[n];
	for(long i=0; i<n; i++)
	cin>>a[i];
	
	sort(a, a+n, cmp);
	
	for(long i=0; i<n; i++)
	cout<<a[i];
	cout<<endl;
}
}

