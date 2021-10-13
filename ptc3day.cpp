#include<iostream>
#include<cmath>
#include<set>
#define ll long long
using namespace std;
int main()
{
	multiset<ll>s;
	multiset<ll>::iterator it;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n1,n2,n3;
		cin>>n1>>n2>>n3;
		ll a[n1],b[n2],c[n3];
		for(ll i=0;i<n1;i++)
		{
			cin>>a[i];
		}
		ll m=0;
		for(ll i=0;i<n2;i++)
		{
			cin>>b[i];
			s.insert(b[i]);
			int h=0;
			for(ll j=0;j<n1;j++)
			{
				if(b[i]==a[j])
				{
					h=1;
				}
			}
			if(h==0)
			{
				s.erase(b[i]);
				m++;
			}
		}
		ll d[n1];
		ll l=0;
		int u=0;
		for(it=s.begin();it!=s.end();it++)
		{
			d[l]=*it;
			l++;
		}
		s.clear();
		for(ll i=0;i<n3;i++)
		{
			cin>>c[i];
			int k=0;
			for(ll j=0;j<l;j++)
			{
				if(c[i]==d[j])
				{
					k=1;
				}
			}
			if(k==1)
			{
				u=1;
				s.insert(c[i]);
			}
		}
		for(it=s.begin();it!=s.end();it++)
		{
			cout<<*it<<" ";
		}
		if(u==0)
		{
			cout<<-1;
		}
		cout<<endl;
	}
}
