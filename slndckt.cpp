#include<iostream>
#include<cmath>
#include<algorithm>
#include<deque>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],maxrange[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		deque <int> dq;
		while(dq.size()) dq.pop_front();
		for(int i=0;i<n;i++)
		{
		while(dq.size()&&a[dq.back()]<=a[i]) dq.pop_back();
		dq.push_back(i);
		if(dq.front()+k<=i) dq.pop_front();
		if(i>=k-1) 
		{
			maxrange[i]=a[dq.front()];
			cout<<maxrange[i]<<" ";
		}
		
		}
		cout<<endl;

	}
}
