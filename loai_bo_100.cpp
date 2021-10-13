#include<iostream>
#include<string>
using namespace std;

void xoa(string s) {
	int count=0;
	while(s.find("100",0)!=-1) {
		s.erase(s.find("100",0),3);
		count+=3;
	}
	if(count!=0)
	{
	cout<<count<<endl;
}	
}

main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s;
		cin>>s;
		xoa(s);
	}
}

