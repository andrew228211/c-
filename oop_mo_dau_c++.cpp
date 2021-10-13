#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class Car{
	private:
		int speed;
		string mark;
		float price;
	public:
		void gtdx(int);
		int dtdx();
		void gm(string);
		string dm();
		void gia(float);
		float xgia();
		void khoitao(int,string,float);
		void show();
};
void Car::gtdx(int a)
{
	speed =a;
}
int Car:: dtdx()
{
	return speed;
}
void Car::gm(string b)
{
	mark=b;
}
string Car::dm()
{
	return mark;
}
void Car::gia(float c)
{
	price=c;
}
float Car::xgia()
{
	return price;
}
void Car::khoitao(int a,string b,float c)
{
	speed=a;
	mark=b;
	price=c;
}
void Car::show()
{
	cout<<"This is a"<<" "<<mark<<" "<<"having a speed of"<<" "<<speed<<" "<<"km/h and its price is $"<<" "<<price<<endl;
}
int main()
{
	Car myCar;
	cout<<"Xe thu nhat"<<endl;
	myCar.khoitao(100,"Ford",30000);
	cout<<"Toc do (km/h): "<<myCar.dtdx()<<endl;
	cout<<"Nhan hieu: "<<myCar.dm()<<endl;
	cout<<"Gia ca: "<<myCar.xgia()<<endl;
	cout<<"Xe thu hai"<<endl;
	myCar.gtdx(150);
	myCar.gm("Mercedes");
	myCar.gia(5000);
	myCar.show();
}
