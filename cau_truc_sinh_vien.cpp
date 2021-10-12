#include<iostream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;
struct SinhVien {
    string name;
    string lop;
    string ngaysinh;
    float b;
};
void nhap(SinhVien& a)
{
    getline(cin, a.name);
    getline(cin, a.lop);
    string s;
    getline(cin, s);
    cin >> a.b;
    if (s[2] != '/')
    {
        s = '0' + s;
    }
    if (s[5] != '/')
    {
       s.insert(s.begin() + 3, '0');
    }
    a.ngaysinh = s;
}
void in(SinhVien& a)
{
    cout << "B20DCCN001" << " " << a.name << " " << a.lop << " " << a.ngaysinh << " ";
    cout << fixed << setprecision(2) << a.b;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

