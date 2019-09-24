#include "Header.h"

ostream& operator <<(ostream& os, PhanSo p)
{
	cout << p.tu << '/' << p.mau;
	return os;
}
istream &operator >> (istream &is, PhanSo &p)
{
	cin >> p.tu >>p.mau;
	return is;
} 
int PhanSo::getTuSo()
{
	return tu;
}
int PhanSo::getMauSo()
{
	return mau;
}
void PhanSo::setTuSo(int x)
{
	this->tu = x;
}
void PhanSo::setMauSo(int x)
{
	this->mau = x;
}
int PhanSo::UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a == b)
		return a;
	else if (a > b)
		return UCLN(a - b, b); 
	else 
		return UCLN(a, b - a);
}
void PhanSo:: RutGonPhanSo()
{
	int x = UCLN(tu, mau);
	if ((tu > 0 && mau < 0)||( tu < 0 && mau < 0))
	{
		tu = -tu;
		mau = -mau;
	}
	tu /= x;
	mau /= x;
}
PhanSo PhanSo:: operator+(PhanSo q)
{
	PhanSo kq;
	kq.tu = this->tu*q.mau + q.tu*this->mau;
	kq.mau = this->mau*q.mau;
	kq.RutGonPhanSo();
	return kq;
}
PhanSo PhanSo:: operator-(PhanSo q)
{
	PhanSo kq;
	kq.tu = this->tu*q.mau - q.tu*this->mau;
	kq.mau = this->mau*q.mau;
	kq.RutGonPhanSo();
	return kq;
}
PhanSo PhanSo:: operator*(PhanSo q)
{
	PhanSo kq;
	kq.tu = this->tu*q.tu;
	kq.mau = this->mau*q.mau;
	kq.RutGonPhanSo();
	return kq;
}
PhanSo PhanSo:: operator/(PhanSo q)
{
	PhanSo kq;
	kq.tu = this->tu*q.mau;
	kq.mau = this->mau*q.tu;
	kq.RutGonPhanSo();
	return kq;
}