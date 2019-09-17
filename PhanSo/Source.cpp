#include "Header.h"
int PhanSo::UCLN(int x, int y)
{
	if (x == y)
		return x;
	if (x > y)
		return UCLN(x - y, y);
	else
		return UCLN(x, y - x);
}
void PhanSo::RutGonPS()
{
	tu /= UCLN(tu, mau);
	mau /= UCLN(tu, mau);
}
ostream& operator<< (ostream& os, PhanSo p)
{
	os << p.tu << p.mau;
	return os;
}
istream &operator >> (istream &is, PhanSo p)
{
	is >> p.tu >> p.mau;
	return is;
}
