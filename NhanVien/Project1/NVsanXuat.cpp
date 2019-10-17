#include "NVsanXuat.h"



NVsanXuat::NVsanXuat()
{
	SOsp = 0;
}
NVsanXuat::~NVsanXuat()
{
}
ostream& operator<<(ostream& os, NVsanXuat a) {
	cout << "Ho va ten: " << a.HOten << endl;
	cout << "Ma: " << a.MA << endl;
	cout << "Dia chi: " << a.DIAchi << endl;
	cout << "Ngay sinh: " << a.NGAYsinh;
	cout << endl << "So san pham: " << a.SOsp;
	return os;
}
istream& operator>>(istream& is, NVsanXuat& a) {
	cout << "Nhap ho va ten: ";
	cin >> a.HOten;
	cout << "Nhap ma: ";
	cin >> a.MA;
	cout << "Dia chi: ";
	cin >> a.DIAchi;
	cout << "Ngay sinh: ";
	cin >> a.NGAYsinh;
	cout << "Nhap so san pham: ";
	cin>> a.SOsp;
	return is;
}
float NVsanXuat::tinhLuong() {
	return SOsp * 20000;
}