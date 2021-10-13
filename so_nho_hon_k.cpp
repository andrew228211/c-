#include <iostream>
using namespace std;
void  minSwap(long *arr, long n, long k) {
    long count = 0;
    for (long i = 0; i < n; ++i)
        if (arr[i] <= k)
            ++count;
    long bad = 0;
    for (long i = 0; i < count; ++i)
        if (arr[i] > k)
            ++bad;
    long ans = bad;
    for (long i = 0, j = count; j < n; ++i, ++j) {
        if (arr[i] > k)
            --bad;
        if (arr[j] > k)
            ++bad;
        ans = min(ans, bad);
    }
    cout<< ans;
}
int main() {
     
    int t;
	cin >> t;
	while (t--)
	{
		long n,k;
		cin>>n>>k;
    	long arr[100000];
    	for(long  i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
    	minSwap(arr,n,k);
    	cout<<endl;
   	
	}	
}

