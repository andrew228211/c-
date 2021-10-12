#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<sstream>
using namespace std;
string chuyen(string s)
{
	string tmp;
	stringstream ss(s);
	string m;
	while(ss>>tmp)
	{
		for(int i=0;i<tmp.size();i++)
		{
			tmp[i]=tolower(tmp[i]);
		}
		tmp[0]=toupper(tmp[0]);
		m+=tmp+" ";
	}
	return m;
}
struct SinhVien{
	string name;
	string lop;
	string date;
	float gpa;
};
void nhap(SinhVien ds[],int n)
{
	string s;
	string s1;
	for(int i=0;i<n;i++)
	{ 	cin.ignore();
		getline(cin,s1);
		ds[i].name=chuyen(s1);
		cin>>ds[i].lop;
		cin>>s;
		if(s[2]!='/')
		{
			s='0'+s;
		}
		if(s[5]!='/')
		{
			s.insert(s.begin()+3,'0');
		}
		ds[i].date=s;
		cin>>ds[i].gpa;	
	}
}
void in(SinhVien ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"B20DCCN";
		if(i<9)
		{
			cout<<"00"<<i+1<<" ";
		}
		else
			cout<<"0"<<i+1<<" ";
		cout<<ds[i].name<<" "<<ds[i].lop<<" "<<ds[i].date<<" ";
		cout<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

