#include<iostream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;
struct Point {

    double x, y;

};
void input(Point& A)
{
    cin >> A.x >> A.y;
}
double distance(Point& A, Point& B)
{
    double k = B.x - A.x;
    double h = B.y - A.y;
    double l = sqrt(h * h + k * k);
    return l;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}

