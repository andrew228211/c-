#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n+5];
		long long dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		stable_sort(a,a+n);
		for(int i=0;i<n-1;i++){
			int temp = a[i] + x;
			int c;
			
			int temp2 = lower_bound(a,a+n,temp)-a;
			c = temp2 - i-1;
			if(c>=1){
				dem+=c;
			}
		}
		cout<<dem<<endl;
		
	}
}

