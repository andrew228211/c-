#include<iostream>
#include<cmath>
#define  ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll i=0,k=1;
		ll j=n-1;
		while(i<=j)
		{
			if(a[i]>a[j]&&a[k]>a[j])
			{
				j--;
			}
			if(a[i]>a[j]&&a[k]<a[j])
			{
				cout<<j-k;
				break;
			}
			if(a[i]<a[j])
			{
				cout<<j-i;
				break;
			}
			i++;
			j++;
		}
		cout<<endl;
	}
}
