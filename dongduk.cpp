#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
	if(b==0)
	{
		return a;
	}
	while(a>0)
	{
		if(a<b)
		{
			int u=a;
			a=b;
			b=u;
		}
		a%=b;
	}
	return b;
}
void solve()
{
		ll n;
		cin>>n;
		ll a[n];
		ll Min=1e6;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			Min=min(a[i],Min);
		}
	ll ucln=a[0]-Min;
	for(ll i=0;i<n;i++)
	{
		ucln=gcd(ucln,a[i]-Min);
	}
	ll count=0;
	for(ll i=1;i<=ucln;i++)
	{
		if(ucln%i==0)
			count++;
	}
	cout<<count<<endl;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
