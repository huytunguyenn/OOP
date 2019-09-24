#ifndef __HEADER_H__
#define __HEADER_H__
#include <iostream>
using namespace std;
class PhanSo {
private:
	int mau;
	int tu;
	int UCLN(int, int);
public:
	PhanSo()
	{
		mau = 1;
		tu = 0;
	}
	//~PhanSo()
	//{
	//	cout << endl<< "Da xoa phan so"<<endl;
	//}
	friend ostream& operator <<(ostream& , PhanSo );
	friend istream &operator >> (istream &, PhanSo &);
	PhanSo operator+(PhanSo);
	PhanSo operator-(PhanSo);
	PhanSo operator*(PhanSo);
	PhanSo operator/(PhanSo);
	operator float() const
	{
		return float(tu)/float(mau);
	}
	void RutGonPhanSo();
	int getTuSo();
	int getMauSo();
	void setTuSo(int);
	void setMauSo(int);
};

#endif
