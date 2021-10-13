#include<iostream>
#include<cmath>
using namespace std;
int n;
long long arr[100000];
long long f[100000];
void kt() {	
	long long tich;
    for (int i = 0; i < n; i++) 
	{
       tich=arr[i];
	   for(int j=i+1;j<n;j++)
	   {
	   		tich=tich*arr[j];
	   		f[i]=max(f[i],tich);
	   		if(tich==0)
	   		{
	   			tich=1;	
	   		}   		
	   }
    }

    long long Max=f[0];
    for(int i=0;i<n;i++)
    {
    	if(Max<=f[i])
    	{
    		Max=f[i];
		}
	}
	cout<<Max;
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
   		f[i]=arr[i];
	}
	 kt();
    cout<<endl;
}
}
