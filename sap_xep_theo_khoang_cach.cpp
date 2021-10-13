#include<bits/stdc++.h> 
using namespace std; 
struct data {
  int index;
   int num;
    int val;
};

bool my_cmp(data a, data b) {
   if(a.num > b.num) { 
   return false;
    }
    if(a.num == b.num && a.index > b.index) {
 return false;
 } 
 return true; 
} 

int main() {
 int t;
 cin>>t; 
 while(t--) {
  int n, x;
   cin>>n>>x;
     int k; 
  vector<data> v; 
  for(int i=0; i<n; i++) {
      cin>>k;
    v.push_back({i, abs(x-k), k}); 
  } 
  sort(v.begin(), v.end(), my_cmp); 
  for(int i=0; i<n; i++) { 
   cout<<v[i].val<<" "; 
  } 
  cout<<endl;
 } 
}
