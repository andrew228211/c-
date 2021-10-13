#include<iostream>
#include<vector>
#include<set>;
#include<algorithm>
#define ll long long
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
		vector<ll>s;
		set<ll>m;
		set<ll>::iterator it;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			m.insert(a[i]);
		}
		ll h= m.size();
		
		for(it=m.begin();it!=m.end();it++)
		{
			s.push_back(*it);
		}
		sort(s.begin(),s.end());
		for(ll i=0;i<n;i++)
		{
			ll r=lower_bound(s.begin(),s.end(),a[i])-s.begin();
			if(r+1<h)
			{
				cout<<s[r+1]<<" ";
			}
			else
				cout<<"_"<<" ";
		}
		cout<<endl;
	}
}
