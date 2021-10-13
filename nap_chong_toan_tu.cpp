#include<bits/stdc++.h>
using namespace std;
class phanso{
	private:
		int tu,mau;
	public:
		phanso()
		{
			tu=mau=0;
		}
		~phanso()
		{
			tu=mau=0;
		}
		void input()
		{
			cin>>this->tu>>this->mau;
		}
		void output()
		{
			cout<<this->tu<<"/"<<this->mau<<endl;
		}
		phanso operator +(phanso b)
		{
			phanso c;
			c.tu=this->tu*b.mau+this->mau*b.tu;
			c.mau=this->mau*b.mau;
			return c;
		}
};
int main()
{
	phanso a,b,c;
	a.input();
	b.input();
	c=a+b;
	c.output();
}
