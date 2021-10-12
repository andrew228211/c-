#include<iostream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;
struct NhanVien {
    string name;
    string sex;
    string date;
    string diachi;
    string ma;
    string ngay;
};
void nhap(NhanVien& a)
{
    cin.ignore();
    getline(cin, a.name);
    cin >> a.sex >> a.date;
    cin.ignore();
    getline(cin, a.diachi);
    cin >> a.ma >> a.ngay;
}
void inds(NhanVien a[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < 9)
        {
            cout << "0000" << i + 1 << " ";
        }
        else
        {
            cout << "000" << i+1 << " ";
        }
        cout << a[i].name << " " << a[i].sex << " " << a[i].date << " " << a[i].diachi << " " << a[i].ma << " " << a[i].ngay << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
