#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;
struct NhanVien {
	int stt;
	string name;
	string sex;
	string date;
	string adress;
	string ma;
	string ki;
};
void nhap(NhanVien& A)
{
	scanf("\n");
	getline(cin, A.name);
	cin >> A.sex >> A.date;
	scanf("\n");
	getline(cin, A.adress);
	cin >> A.ma >> A.ki;
}
void thutu(NhanVien ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ds[i].stt = i + 1;
	}
}
bool kt(NhanVien& x, NhanVien& y)
{
	string a, b;
	for (int i = 6; i <= 9; i++)
	{
		a += x.date[i];
		b += y.date[i];
	}
	for (int i = 0; i <= 1; i++)
	{
		a += x.date[i];
		b+= y.date[i];
	}
	for (int i = 3; i <= 4; i++)
	{
		a += x.date[i];
		b += y.date[i];
	}
	return a < b;
}
void sapxep(NhanVien ds[], int n)
{
	thutu(ds, n);
	sort(ds, ds + n, kt);
}
void inds(NhanVien ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ds[i].stt <= 9)
		{
			cout << "0000";
		}
		else
			cout << "000";
		cout << ds[i].stt << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].date << " " << ds[i].adress << " " << ds[i].ma << " " << ds[i].ki << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}


