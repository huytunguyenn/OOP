#include "Header.h"

int main()
{
	PhanSo p,q;
	cout << "Nhap vao phan so 1: ";	cin >> p;
	cout << "Nhap vao phan so 2: "; cin >> q;
	cout << p << "+" << q << "=" << p + q << endl;
	cout << p << "x" << q << "=" <<p*q << endl;
	cout << p << "-" << q << "=" << p - q << endl;
	cout << p << ":" << q << "=" << p/q << endl;
	system("pause");
	return 0;
}