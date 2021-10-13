#include<iostream>
#include<cmath>
using namespace std;
long long n;
long long arr[100000];
void kt() {
    long long best = -999999, sum = 0;
    for (int i = 0; i < n; i++) 
	{
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    cout<<best;
}
int main() {
  int t;
  cin>>t;
  while(t--)
   {
   	cin>>n;
   	for(int i=0;i<n;i++)
   	{
   		cin>>arr[i];
	}
	 kt();
    cout<<endl;
}
}
