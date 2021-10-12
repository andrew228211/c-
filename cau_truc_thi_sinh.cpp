#include<iostream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;
struct ThiSinh {
    string name;
    string ngaysinh;
    float a, b, c;
};
void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    cin >> A.ngaysinh >> A.a >> A.b>>A.c;
}
float tong(ThiSinh& A)
{
    double x= A.a + A.b + A.c;
    return x;
}
void in(ThiSinh& A)
{
    cout << A.name << " " << A.ngaysinh << " ";
    cout << fixed << setprecision(1) << tong(A);
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
