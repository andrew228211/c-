#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
using namespace std;

struct SinhVien
{
    int stt;
    float gpa;
    string name;
    string clas;
    string birth;
};
bool cmp(SinhVien x, SinhVien y)
{
    return x.gpa > y.gpa;
}
string chuanHoa(string src)
{
    string out = "", tmp;
    stringstream ss;
    ss << src;
    while (ss >> tmp)
    {
        for (int i = 1; i < tmp.size(); i++)
            tmp[i] = tolower(tmp[i]);
        tmp[0] = toupper(tmp[0]);
        out = out + tmp + " ";
    }
    return out;
}
void nhap(SinhVien x[], int n)
{
    string bir, oldName;
    for (int i = 0; i < n; i++)
    {
        x[i].stt = i + 1;
        scanf("\n");
        getline(cin, oldName);
        x[i].name = chuanHoa(oldName);
        cin >> x[i].clas >> bir >> x[i].gpa;
        if (bir[2] != '/')
            bir = '0' + bir;
        if (bir[5] != '/')
            bir.insert(bir.begin() + 3, '0');
        x[i].birth = bir;
    }
}
void sapxep(SinhVien x[], int n)
{
    sort(x, x + n, cmp);
}
void in(SinhVien x[], int n)
{
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++)
    {
        cout << "B20DCCN0";
        if (x[i].stt < 10)
            cout << 0;
        cout << x[i].stt << " " << x[i].name << x[i].clas << " " << x[i].birth << " " << x[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
