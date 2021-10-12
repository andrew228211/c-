#include<iostream>
#include<cmath>
using namespace std;
long long n;
long a[100000];
void kt() {
    int result = 1;
    int f[n];
	for (int i=0; i<n; i++) {
    	f[i] = 0;
    for (int j=0; j<i; j++) if (a[j] < a[i]) {
        f[i] = max(f[i], f[j] + 1);
    }
    result = max(result, f[i]);
}
	cout<< result+1;
}	
int main() {
  int t;
  cin>>t;
  while(t--)
   {
   	cin>>n;
   	for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
	}
	 kt();
    cout<<endl;
}
}

