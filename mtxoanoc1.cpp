#include<bits/stdc++.h>
 using namespace std; 
 int main()
 {
  int t; 
  cin>>t;
   while(t--)
   { 
   int m, n;
    cin >> m >> n; 
	int a[m][n]; 
	for(int i=0;i<m;i++)
	{ for(int j=0;j<n;j++)
	{ 
	cin>>a[i][j];
	 } 
	 } 
	 int dong = m, cot = n, k = 0, p = 0, i, j;
	  int b[m*n];
	   while(k < m*n)
	   { 
	   for(i = p; i < cot; i++)
	    b[k++]=a[p][i]; 
		for(i = p+1; i < dong; i++) 
			b[k++]=a[i][cot-1];
		for(i = cot-2; i >=p; i--)
		 	 b[k++]=a[dong-1][i];
		 for(i = dong-2; i > p; i--) 
				b[k++]=a[i][p];
		 p++;
		 dong --; 
		 cot --;
		 } 
		 for(i = 0; i < m*n; i++)
		 {
		  cout << b[i] << " ";
		   } 
		   cout << endl; 
		   }
		 }

