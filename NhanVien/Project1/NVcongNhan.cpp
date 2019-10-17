#include "NVcongNhan.h"

NVcongNhan::NVcongNhan()
{
	SOngay = 0;
}
NVcongNhan::~NVcongNhan()
{
}
ostream& operator<<(ostream& os, NVcongNhan a) {
	cout << "Ho va ten: " << a.HOten << endl;
	cout << "Ma: " << a.MA << endl;
	cout << "Dia chi: " << a.DIAchi << endl;
	cout << "Ngay sinh: " << a.NGAYsinh;
	cout << endl << "So ngay lam: " << a.SOngay;
	return os;
}
istream& operator>>(istream& is, NVcongNhan& a) {
	cout << "Nhap ho va ten: ";
	cin >> a.HOten;
	cout << "Nhap ma: ";
	cin >> a.MA;
	cout << "Dia chi: ";
	cin >> a.DIAchi;
	cout << "Ngay sinh: ";
	cin >> a.NGAYsinh;
	cout << "Nhap so ngay lam: ";
	cin >> a.SOngay;
	return is;
}
float NVcongNhan::tinhLuong() {
	return SOngay * 300000;
}